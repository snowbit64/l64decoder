-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

StadiaSimulator = {IS_HDR_ACTIVE = false, HAS_RECORDING_DEVICE = false, ACTIVE_GAMEPAD_INDEX = 0}
function StadiaSimulator.init()
  function keyEvent(unicode, sym, modifier, isDown)
    if isDown then
      if sym == Input.KEY_1 then
        Logging.devInfo("StadiaSimulator: onMultiplayerInviteSent")
        onMultiplayerInviteSent()
      elseif sym == Input.KEY_2 then
        Logging.devInfo("StadiaSimulator: onWaitForPendingGameSession")
        onWaitForPendingGameSession()
      else
        if sym == Input.KEY_3 then
          Logging.devInfo("StadiaSimulator: onRemovedFromInvite")
          onRemovedFromInvite()
        elseif sym == Input.KEY_5 then
          StadiaSimulator.IS_HDR_ACTIVE = not StadiaSimulator.IS_HDR_ACTIVE
          local v6 = tostring(StadiaSimulator.IS_HDR_ACTIVE)
          Logging.devInfo(...)
        else
          if sym == Input.KEY_6 then
            StadiaSimulator.HAS_RECORDING_DEVICE = not StadiaSimulator.HAS_RECORDING_DEVICE
            v6 = tostring(StadiaSimulator.HAS_RECORDING_DEVICE)
            Logging.devInfo(...)
          elseif sym == Input.KEY_7 then
            StadiaSimulator.ACTIVE_GAMEPAD_INDEX = StadiaSimulator.ACTIVE_GAMEPAD_INDEX + 1
            local v5 = u0()
            if v5 <= StadiaSimulator.ACTIVE_GAMEPAD_INDEX then
              StadiaSimulator.ACTIVE_GAMEPAD_INDEX = 0
            end
            Logging.devInfo("StadiaSimulator: activeGamepadIndex: %d", StadiaSimulator.ACTIVE_GAMEPAD_INDEX)
          end
        end
      end
    end
    u1(unicode, sym, modifier, isDown)
  end
  function getHdrAvailable()
    return StadiaSimulator.IS_HDR_ACTIVE
  end
  function voiceChatGetHasRecordingDevice()
    return StadiaSimulator.HAS_RECORDING_DEVICE
  end
  function getNumOfGamepads()
    return 1
  end
  function getGamepadId(deviceIndex)
    return u0(StadiaSimulator.ACTIVE_GAMEPAD_INDEX)
  end
  function getGamepadButtonLabel(buttonIndex, deviceIndex)
    return u0(buttonIndex, StadiaSimulator.ACTIVE_GAMEPAD_INDEX)
  end
  function getGamepadName(deviceIndex)
    return u0(StadiaSimulator.ACTIVE_GAMEPAD_INDEX)
  end
  function getInputButton(buttonIndex, deviceIndex)
    return u0(buttonIndex, StadiaSimulator.ACTIVE_GAMEPAD_INDEX)
  end
  function getGamepadAxisLabel(axisIndex, deviceIndex)
    return u0(axisIndex, StadiaSimulator.ACTIVE_GAMEPAD_INDEX)
  end
  function getInputAxis(axisIndex, deviceIndex)
    return u0(axisIndex, StadiaSimulator.ACTIVE_GAMEPAD_INDEX)
  end
  addConsoleCommand("gsStadiaAcceptInvite", "Stadia simulator accept invitation", "acceptedGameInvite", StadiaSimulator)
  print("\n\n  ##################   Warning: Stadia Simulator active!   ##################\n\n")
end
function StadiaSimulator.acceptedGameInvite(platformServerId, requestUserName)
  acceptedGameInvite(platformServerId or "2", requestUserName or "test -user")
end
