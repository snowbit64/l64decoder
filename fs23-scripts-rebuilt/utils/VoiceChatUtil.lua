-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

VoiceChatUtil = {MODE = {DISABLED = 1, VOICE_ACTIVITY = 2, PUSH_TO_TALK = 3}}
function VoiceChatUtil.setOutputVolume(v0)
  voiceChatSetMasterVolume(v0)
end
function VoiceChatUtil.getOutputVolume()
  return voiceChatGetMasterVolume()
end
function VoiceChatUtil.setInputVolume(v0)
  voiceChatSetRecordingVolume(v0)
end
function VoiceChatUtil.getInputVolume()
  return voiceChatGetRecordingVolume()
end
function VoiceChatUtil.setInputMode(mode)
  if mode == VoiceChatUtil.MODE.DISABLED then
    voiceChatSetRecordingMode(VoiceChatRecordingMode.DISABLED)
    return
  end
  if mode == VoiceChatUtil.MODE.VOICE_ACTIVITY then
    voiceChatSetRecordingMode(VoiceChatRecordingMode.AUTOMATIC)
    return
  end
  if mode == VoiceChatUtil.MODE.PUSH_TO_TALK then
    voiceChatSetRecordingMode(VoiceChatRecordingMode.MUTED)
  end
end
function VoiceChatUtil.getInputMode()
  local v0 = VoiceChatUtil.getIsVoiceRestricted()
  if v0 then
    return VoiceChatUtil.MODE.DISABLED
  end
  v0 = v0:getValue(SettingsModel.SETTING.VOICE_MODE)
  return v0
end
function VoiceChatUtil.setIsPushToTalkPressed(pressed)
  if g_currentMission ~= nil and g_currentMission.missionDynamicInfo.isMultiplayer then
    local v1 = VoiceChatUtil.getInputMode()
    if v1 == VoiceChatUtil.MODE.PUSH_TO_TALK then
      if pressed then
        voiceChatSetRecordingMode(VoiceChatRecordingMode.ALWAYS)
        return
      end
      voiceChatSetRecordingMode(VoiceChatRecordingMode.MUTED)
    end
  end
end
function VoiceChatUtil.setUserVolume(uuid, volume)
  voiceChatSetUserVolume(uuid, volume)
end
function VoiceChatUtil.getUserVolume(uuid)
  return voiceChatGetUserVolume(uuid)
end
function VoiceChatUtil.getIsSpeakerActive(uuid)
  local v2 = voiceChatGetConnectionStatus(uuid)
  if v2 ~= VoiceChatConnectionStatus.ACTIVE then
  end
  return true
end
function VoiceChatUtil.getHasRecordingDevice()
  if Platform.isStadia then
    return voiceChatGetHasRecordingDevice()
  end
  return true
end
function VoiceChatUtil.getIsVoiceRestricted()
  local v1 = getAllowVoiceCommunication(false)
  return not v1
end
function VoiceChatUtil.showVoiceRestrictedPopup()
  getAllowVoiceCommunication(true)
end
function VoiceChatUtil.getInputSensitivity()
  local raw = voiceChatGetAutoActivationSensitivity()
  if raw < 0 then
    return -1
  end
  return 1 - raw
end
function VoiceChatUtil.setInputSensitivity(value)
  if 0 <= value then
  end
  voiceChatSetAutoActivationSensitivity(v1)
end
