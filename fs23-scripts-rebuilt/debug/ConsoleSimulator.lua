-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConsoleSimulator = {MP_AVAILABILITY = nil, NETWORK_ERROR = nil, ACHIEVEMENTS_AVAILABLE = true, NEW_DLCS = false, STORE_DLC_CHANGED = false}
function ConsoleSimulator.init()
  function keyEvent(unicode, sym, modifier, isDown)
    if isDown then
      if sym == Input.KEY_1 then
        Logging.devInfo("ConsoleSimulator: NETWORK_ERROR - Error")
        ConsoleSimulator.NETWORK_ERROR = "ERROR"
      elseif sym == Input.KEY_2 then
        Logging.devInfo("ConsoleSimulator: NETWORK_ERROR - Nil")
        ConsoleSimulator.NETWORK_ERROR = nil
      else
        if sym == Input.KEY_3 then
          Logging.devInfo("ConsoleSimulator: MP_AVAILABILITY - nil")
          ConsoleSimulator.MP_AVAILABILITY = nil
        elseif sym == Input.KEY_4 then
          Logging.devInfo("ConsoleSimulator: MP_AVAILABILITY - AVAILABILITY_UNKNOWN")
          ConsoleSimulator.MP_AVAILABILITY = MultiplayerAvailability.AVAILABILITY_UNKNOWN
        else
          if sym == Input.KEY_5 then
            Logging.devInfo("ConsoleSimulator: MP_AVAILABILITY - NOT_AVAILABLE")
            ConsoleSimulator.MP_AVAILABILITY = MultiplayerAvailability.NOT_AVAILABLE
          elseif sym == Input.KEY_6 then
            Logging.devInfo("ConsoleSimulator: MP_AVAILABILITY - NO_PRIVILEGES")
            ConsoleSimulator.MP_AVAILABILITY = MultiplayerAvailability.NO_PRIVILEGES
          else
            if sym == Input.KEY_7 then
              Logging.devInfo("ConsoleSimulator: finishedUserProfileSync")
              finishedUserProfileSync()
            elseif sym == Input.KEY_9 then
              Logging.devInfo("ConsoleSimulator: onMasterServerConnectionFailed - conenction lost")
              v4:onMasterServerConnectionFailed(MasterServerConnection.FAILED_CONNECTION_LOST)
            else
              if sym == Input.KEY_0 then
                Logging.devInfo("ConsoleSimulator: NEW_DLCS")
                ConsoleSimulator.NEW_DLCS = true
                ConsoleSimulator.STORE_DLC_CHANGED = true
              elseif sym == Input.KEY_KP_1 then
                ConsoleSimulator.ACHIEVEMENTS_AVAILABLE = not ConsoleSimulator.ACHIEVEMENTS_AVAILABLE
                local v6 = tostring(ConsoleSimulator.ACHIEVEMENTS_AVAILABLE)
                Logging.devInfo(...)
              end
            end
          end
        end
      end
    end
    u0(unicode, sym, modifier, isDown)
  end
  function getNetworkError()
    if ConsoleSimulator.NETWORK_ERROR ~= nil then
      return ConsoleSimulator.NETWORK_ERROR
    end
    return u0()
  end
  function getMultiplayerAvailability()
    if ConsoleSimulator.MP_AVAILABILITY ~= nil then
      return ConsoleSimulator.MP_AVAILABILITY, false
    end
    return u0()
  end
  function areAchievementsAvailable()
    return ConsoleSimulator.ACHIEVEMENTS_AVAILABLE
  end
  function startFrameRepeatMode()
    Logging.devInfo("ConsoleSimulator: startFrameRepeatMode")
    return u0()
  end
  function endFrameRepeatMode()
    Logging.devInfo("ConsoleSimulator: endFrameRepeatMode")
    return u0()
  end
  function forceEndFrameRepeatMode()
    Logging.devInfo("ConsoleSimulator: forceEndFrameRepeatMode")
    u0()
  end
  function checkForNewDlcs()
    if ConsoleSimulator.NEW_DLCS then
      ConsoleSimulator.NEW_DLCS = false
      return true
    end
    return u0()
  end
  function storeHaveDlcsChanged()
    if ConsoleSimulator.STORE_DLC_CHANGED then
      ConsoleSimulator.STORE_DLC_CHANGED = false
      return true
    end
    return u0()
  end
  function openMpFriendInvitation(num, capacity)
    Logging.devInfo("ConsoleSimulator: Open friend invitation. Currently online: %d . Capacity: %d", num, capacity)
    u0(num, capacity)
  end
  addConsoleCommand("gsConsoleAcceptInvite", "Console simulator accept invitation", "acceptedGameInvite", ConsoleSimulator)
  print("\n\n  ##################   Warning: Console Simulator active!   ##################\n\n")
end
function ConsoleSimulator.acceptedGameInvite(_, platformServerId, requestUserName)
  acceptedGameInvite(platformServerId or "2", requestUserName or "test -user")
end
