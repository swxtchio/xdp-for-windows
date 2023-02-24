//
// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
//

#pragma once

bool
TestSetup();

bool
TestCleanup();

VOID
OpenApiTest();

VOID
LoadApiTest();

VOID
GenericBinding();

VOID
GenericBindingResetAdapter();

VOID
GenericRxSingleFrame();

VOID
GenericRxNoPoke();

VOID
GenericRxBackfillAndTrailer();

VOID
GenericRxAllQueueRedirect(
    _In_ ADDRESS_FAMILY Af
    );

VOID
GenericRxMatch(
    _In_ ADDRESS_FAMILY Af,
    _In_ XDP_MATCH_TYPE MatchType,
    _In_ BOOLEAN IsUdp
    );

VOID
GenericRxMatchIpPrefix(
    _In_ UINT16 AddressFamily
    );

VOID
GenericRxLowResources();

VOID
GenericRxMultiSocket();

VOID
GenericRxMultiProgram();

VOID
GenericRxUdpFragmentQuicShortHeader(
    _In_ ADDRESS_FAMILY Af
    );

VOID
GenericRxUdpFragmentQuicLongHeader(
    _In_ ADDRESS_FAMILY Af,
    _In_ BOOLEAN IsUdp
    );

VOID
GenericRxFragmentHeaderData(
    _In_ ADDRESS_FAMILY Af,
    _In_ BOOLEAN IsUdp
    );

VOID
GenericRxTooManyFragments(
    _In_ ADDRESS_FAMILY Af,
    _In_ BOOLEAN IsUdp
    );

VOID
GenericRxHeaderFragments(
    _In_ ADDRESS_FAMILY Af,
    _In_ XDP_RULE_ACTION ProgramAction,
    _In_ BOOLEAN IsUdp,
    _In_ BOOLEAN IsTxInspect = FALSE,
    _In_ BOOLEAN IsLowResources = FALSE
    );

VOID
GenericRxFromTxInspect(
    _In_ ADDRESS_FAMILY Af
    );

VOID
GenericTxToRxInject();

VOID
GenericTxSingleFrame();

VOID
GenericTxOutOfOrder();

VOID
GenericTxSharing();

VOID
GenericTxPoke();

VOID
GenericTxMtu();

VOID
GenericXskWait(
    _In_ BOOLEAN Rx,
    _In_ BOOLEAN Tx
    );

VOID
GenericXskWaitAsync(
    _In_ BOOLEAN Rx,
    _In_ BOOLEAN Tx
    );

VOID
GenericLwfDelayDetach(
    _In_ BOOLEAN Rx,
    _In_ BOOLEAN Tx
    );

VOID
GenericLoopback(
    _In_ ADDRESS_FAMILY Af
    );

VOID
FnMpNativeHandleTest();

VOID
FnLwfRx();

VOID
FnLwfTx();

VOID
FnLwfOid();

VOID
OffloadRssError();

VOID
OffloadRssReference();

VOID
OffloadRssInterfaceRestart();

VOID
OffloadRssUnchanged();

VOID
OffloadRssUpperSet();

VOID
OffloadRssSet();

VOID
OffloadRssCapabilities();

VOID
OffloadSetHardwareCapabilities();

VOID
GenericXskQueryAffinity();
