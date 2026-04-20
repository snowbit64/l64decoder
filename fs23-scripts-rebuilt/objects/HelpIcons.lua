-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

HelpIcons = {}
local HelpIcons_mt = Class(HelpIcons)
function HelpIcons.onCreate(v0, v1)
  local v2 = HelpIcons.new(v1)
  v3:addNonUpdateable(v2)
  g_currentMission.helpIconsBase = v2
end
function HelpIcons.new(name)
  setmetatable({}, u0)
  local v2 = getNumOfChildren({me = name}.me)
  -- TODO: structure LOP_FORNPREP (pc 21, target 64)
  local v6 = getChildAt({me = name, helpIcons = {}}.me, 0)
  local v7 = getChildAt(v6, 0)
  local v9 = getUserAttribute(v6, "customNumber")
  local v8 = Utils.getNoNil(v9, 0)
  addTrigger(v6, "triggerCallback", {me = name, helpIcons = {}})
  table.insert({me = name, helpIcons = {}}.helpIcons, {helpIconTriggerId = v6, helpIconId = v7, helpIconCustomNumber = v8})
  -- TODO: structure LOP_FORNLOOP (pc 63, target 22)
  return {me = name, helpIcons = {}, visible = true}
end
function HelpIcons:delete()
  for v4, v5 in pairs(self.helpIcons) do
    removeTrigger(v5.helpIconTriggerId)
  end
end
function HelpIcons.update(v0, v1)
end
function HelpIcons:triggerCallback(triggerId, otherId, onEnter, onLeave, onStay)
  if onEnter then
    if g_currentMission.player ~= nil and otherId == g_currentMission.player.rootNode then
      -- if g_currentMission.controlPlayer then goto L23 end
    end
    if g_currentMission.controlledVehicle ~= nil and g_currentMission.controlledVehicle == g_currentMission.nodeToObject[otherId] then
      for v10, v11 in ipairs(self.helpIcons) do
        if not (v11.helpIconTriggerId == triggerId) then
          continue
        end
        local v12 = getVisibility(v11.helpIconId)
        if not v12 then
          continue
        end
        setVisibility(v11.helpIconId, false)
        setCollisionMask(v11.helpIconTriggerId, 0)
        v6.foundHelpIcons = ""
        for v15, v16 in ipairs(self.helpIcons) do
          local v17 = getVisibility(v16.helpIconId)
          if v17 then
            v6.foundHelpIcons = v6.foundHelpIcons .. "0"
          else
            v6.foundHelpIcons = v6.foundHelpIcons .. "1"
          end
        end
        if v11.helpIconCustomNumber == 0 then
        end
        v15 = v15:getText("helpIcon_title" .. v12)
        v16 = v16:getText("helpIcon_text" .. v12)
        v13:showMessage(v15, v16, 0)
      end
    end
  end
end
function HelpIcons:showHelpIcons(visible, clearIconStates)
  self.visible = visible
  for v7, v8 in ipairs(self.helpIcons) do
    if clearIconStates ~= nil then
      -- if v2 then goto L28 end
    end
    if v9 then
      local v11 = string.sub(v3, v7, v7)
      if v11 ~= "0" then
      end
    end
    setVisibility(v8.helpIconId, v10)
    if v10 then
      setCollisionMask(v8.helpIconTriggerId, 3145728)
    else
      setCollisionMask(v8.helpIconTriggerId, 0)
    end
  end
end
function HelpIcons:deleteHelpIcon(i)
  if self.helpIcons[i] ~= nil then
    setVisibility(self.helpIcons[i].helpIconId, false)
    setCollisionMask(self.helpIcons[i].helpIconTriggerId, 0)
  end
end
