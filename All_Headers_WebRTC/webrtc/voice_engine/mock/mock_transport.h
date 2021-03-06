/*
 *  Copyright (c) 2015 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#ifndef WEBRTC_VOICE_ENGINE_MOCK_TRANSPORT_H_
#define WEBRTC_VOICE_ENGINE_MOCK_TRANSPORT_H_

#include "testing/gmock/include/gmock/gmock.h"
#include "webrtc/common_types.h"

namespace webrtc {

class MockTransport : public Transport {
 public:
  MOCK_METHOD2(SendPacket, int(const void* data, size_t len));
  MOCK_METHOD2(SendRTCPPacket, int(const void* data, size_t len));
};

}  // namespace webrtc

#endif  // WEBRTC_VOICE_ENGINE_MOCK_TRANSPORT_H_
