-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuContractsFrame = {}
local InGameMenuContractsFrame_mt = Class(InGameMenuContractsFrame, TabbedMenuFrameElement)
InGameMenuContractsFrame.CONTROLS = {CONTRACTS_LIST_BOX = "contractsListBox", DETAILS_BOX = "detailsBox", NO_CONTRACTS_BOX = "noContractsBox", CONTRACTS_CONTAINER = "contractsContainer", CONTRACTS_LIST = "contractsList", CONTRACTS_LIST_ITEM_TEMPLATE = "contractsListItemTemplate", FARMER_BOX = "farmerBox", FARMER_IMAGE = "farmerImage", FARMER_NAME = "farmerName", FARMER_TEXT = "farmerText", CONTRACT_BOX = "contractBox", TITLE_TEXT = "titleText", USE_OWN_EQUIPMENT = "useOwnEquipementText", CONTRACT_TEXT = "contractDescriptionText", REWARD_TEXT = "rewardText", ACTION_TEXT = "actionText", FIELD_BIG_TEXT = "fieldBigText", VEHICLES_BOX = "vehiclesBox", VEHICLE_TEMPLATE = "vehicleTemplate", PROGRESS_TEXT = "progressText", PROGRESS_TITLE_TEXT = "progressTitleText", NPC_FIELD_BOX = "npcFieldBox", EXTRA_PROGRESS_TEXT = "extraProgressText", TALLY_BOX = "tallyBox", PROGRESS_BAR_BG = "progressBarBg", PROGRESS_BAR = "progressBar"}
InGameMenuContractsFrame.LIST_ITEM_CONTRACT_NAME = "contract"
InGameMenuContractsFrame.LIST_ITEM_FIELD_NAME = "field"
InGameMenuContractsFrame.LIST_ITEM_REWARD_NAME = "reward"
InGameMenuContractsFrame.LIST_ITEM_INDICATOR_ACTIVE_NAME = "indicatorActive"
InGameMenuContractsFrame.LIST_ITEM_INDICATOR_FINISHED_NAME = "indicatorFinished"
InGameMenuContractsFrame.LIST_ITEM_INDICATOR_FAILED_NAME = "indicatorFailed"
InGameMenuContractsFrame.BUTTON_STATE = {POSSIBLE = 0, ACTIVE = 1, FINISHED = 2}
function InGameMenuContractsFrame.register()
  local v0 = InGameMenuContractsFrame.new()
  v1:loadGui("dataS/gui/InGameMenuContractsFrame.xml", "ContractsFrame", v0, true)
end
function InGameMenuContractsFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuContractsFrame.CONTROLS)
  v2.hasCustomMenuButtons = true
  v2.vehicleElements = {}
  v2.contracts = {}
  v2.sectionContracts = {}
  v2.updateTime = 0
  v2.marqueeTime = 0
  return v2
end
function InGameMenuContractsFrame:createFromExistingGui(v1)
  local v2 = InGameMenuContractsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuContractsFrame:onGuiSetupFinished()
  local v2 = v2:superClass()
  v2.onGuiSetupFinished(self)
  v1:setDataSource(self)
  v1:setDelegate(self)
end
function InGameMenuContractsFrame:initialize()
  self.backButtonInfo = {inputAction = InputAction.MENU_BACK}
  local v2 = v2:getText("button_acceptContract")
  self.acceptButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = function()
    self:onButtonAccept()
  end}
  v2 = v2:getText("button_borrowItems")
  self.leaseButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v2, callback = function()
    self:onButtonLease()
  end}
  v2 = v2:getText("button_fieldJob_complete")
  self.dismissButtonInfo = {inputAction = InputAction.MENU_ACTIVATE, text = v2, callback = function()
    self:onButtonDismiss()
  end}
  v2 = v2:getText("button_cancel")
  self.cancelButtonInfo = {inputAction = InputAction.MENU_CANCEL, text = v2, callback = function()
    self:onButtonCancel()
  end}
  v1:unlinkElement()
end
function InGameMenuContractsFrame:delete()
  if self.vehicleTemplate ~= nil then
    v1:delete()
  end
  local v2 = v2:superClass()
  v2.delete(self)
  v1:unsubscribeAll(self)
end
function InGameMenuContractsFrame:update(dt)
  local v3 = v3:superClass()
  v3.update(self, dt)
  if self.updateTime < g_currentMission.time then
    self.updateTime = g_currentMission.time + 5000
    local v2, v3 = v2:getSelectedPath()
    self:updateDetailContents(v2, v3)
  end
  self:updateMarqueeAnimation(dt)
end
function InGameMenuContractsFrame:onFrameOpen(element)
  local v3 = v3:superClass()
  v3.onFrameOpen(self)
  v2:subscribe(MissionStartedEvent, self.updateList, self)
  v2:subscribe(MissionDismissEvent, self.updateList, self)
  v2:subscribe(MissionFinishedEvent, self.updateList, self)
  v2:subscribe(MessageType.MISSION_GENERATED, self.updateList, self)
  v2:subscribe(MessageType.MISSION_DELETED, self.updateList, self)
  v2:subscribe(PlayerPermissionsEvent, self.updateButtonsForPermissions, self)
  self:setButtonsForState(InGameMenuContractsFrame.BUTTON_STATE.POSSIBLE)
  self:setSoundSuppressed(true)
  self:updateList()
  v2:setFocus(self.contractsList)
  self:setSoundSuppressed(false)
end
function InGameMenuContractsFrame:onFrameClose(element)
  local v3 = v3:superClass()
  v3.onClose(self)
  self.contracts = {}
  v2:unsubscribeAll(self)
end
function InGameMenuContractsFrame:updateButtonsForPermissions()
  local v1, v2 = v1:getSelectedPath()
  self:updateDetailContents(v1, v2)
end
function InGameMenuContractsFrame:setButtonsForState(state, canLease)
  local v4 = v4:getHasPlayerPermission(Farm.PERMISSION.MANAGE_CONTRACTS)
  if state == InGameMenuContractsFrame.BUTTON_STATE.FINISHED then
    table.insert({self.backButtonInfo}, self.dismissButtonInfo)
    self.dismissButtonInfo.disabled = not v4
  elseif state == InGameMenuContractsFrame.BUTTON_STATE.ACTIVE then
    table.insert({self.backButtonInfo}, self.cancelButtonInfo)
    self.cancelButtonInfo.disabled = not v4
  else
    if 0 < #self.contracts then
      table.insert({self.backButtonInfo}, self.acceptButtonInfo)
      self.acceptButtonInfo.disabled = not v4
      if canLease then
        table.insert({self.backButtonInfo}, self.leaseButtonInfo)
        self.leaseButtonInfo.disabled = not v4
      end
    end
  end
  self.menuButtonInfo = v3
  self:setMenuButtonInfoDirty()
end
function InGameMenuContractsFrame:onContractsChanged()
  state:updateItemPositions()
end
function InGameMenuContractsFrame:updateList()
  local v3 = v3:getFarmId()
  local state = state:getMissionsList(...)
  if #state == 0 then
  end
  v3:setVisible(true)
  v3:setVisible(true)
  v3:setVisible(not true)
  v3 = self:getSelectedContract()
  if v3 ~= nil then
    self.storedSelected = v3.mission.generationTime
  else
    self.storedSelected = nil
  end
  self.contracts = {}
  for v7, v8 in ipairs(state) do
    if v8.status ~= AbstractMission.STATUS_RUNNING then
    end
    if v8.status ~= AbstractMission.STATUS_FINISHED then
    end
    if v8.status ~= AbstractMission.STATUS_STOPPED then
    end
    local v12 = v8:getData()
    table.insert(self.contracts, {mission = v8, active = v9, finished = v10, possible = true, jobType = v12.jobType})
  end
  self:sortList()
  v4:reloadData()
end
function InGameMenuContractsFrame:updateProgressBar(value)
  local v6 = math.min(value, 1)
  v3:setSize((self.progressBarBg.size[1] - self.progressBar.margin[1] * 2) * v6, nil)
end
function InGameMenuContractsFrame:updateDetailContents(section, index)
  if self.sectionContracts[section] ~= nil then
  end
  for v8, v9 in pairs(self.vehicleElements) do
    v9:delete()
  end
  self.vehicleElements = {}
  if v3 ~= nil then
    if not v3.active then
      -- if not v3.possible then goto L292 end
    end
    v6:setVisible(true)
    v6:setVisible(false)
    v9 = v3.mission:getNPC()
    self:updateFarmersBox(...)
    v6 = v6:isa(TransportMission)
    if v6 then
      self:updateTransportContractInfo(v3.mission)
    else
      self:updateFieldContractInfo(v3.mission)
    end
    v6:setVisible(false)
    v6:setVisible(v3.possible)
    v6:setVisible(v3.active)
    v6:setVisible(v3.active)
    v6:setVisible(v3.active)
    v6:setVisible(v3.active)
    if v3.active then
      v8 = string.format("%.0f%%", v5.completion * 100)
      v6:setText(...)
      v8 = v5:getExtraProgressText()
      v6:setText(...)
      self:setButtonsForState(InGameMenuContractsFrame.BUTTON_STATE.ACTIVE)
      self:updateProgressBar(v5.completion)
      return
    end
    v6 = v5:hasLeasableVehicles()
    if v6 then
      v7:setVisible(true)
      v7 = v7:formatMoney(v5.vehicleUseCost, 0, true, true)
      v9 = v9:getText("fieldJob_desc_useOwnEquipment")
      v8 = string.format(v9, v7)
      v9 = v5:getData()
      if v9.extraText ~= nil then
      end
      v10:setText(v8)
      for v15, v16 in ipairs(v5.vehiclesToLoad) do
        local v17 = v17:getItemByXMLFilename(v16.filename)
        if v17 == nil then
          Logging.error("Mission uses non-existing vehicle at '%s'", v16.filename)
          break
        end
        local v18 = v18:clone(self.vehiclesBox)
        v18:setImageFilename(v17.imageFilename)
        v18:setImageColor(nil, nil, nil, nil, 1)
        table.insert(self.vehicleElements, v18)
      end
      v12:setPosition(0)
      v12:setSize(v10)
      v12:invalidateLayout()
    end
    self:setButtonsForState(InGameMenuContractsFrame.BUTTON_STATE.POSSIBLE, v6)
    return
    if v3.finished then
      v6:setVisible(false)
      v6:setVisible(false)
      v6:setVisible(true)
      if v3.mission.success then
        local v10 = v3.mission:getReward()
        v10 = v3.mission:hasLeasableVehicles()
        if v10 and v3.mission.spawnedVehicles then
          v10 = v3.mission:calculateReimbursement()
        end
      end
      if v5.stealingCost ~= nil then
      end
      local v11 = v11:getDescendantByName("reward")
      v13 = v13:formatMoney(v6, 0, true, true)
      v11:setText(...)
      v11 = v11:getDescendantByName("leaseCost")
      v13 = v13:formatMoney(v8, 0, true, true)
      v11:setText(...)
      v11 = v11:getDescendantByName("reimburse")
      v13 = v13:formatMoney(v7, 0, true, true)
      v11:setText(...)
      v11 = v11:getDescendantByName("stealing")
      v13 = v13:formatMoney(v9, 0, true, true)
      v11:setText(...)
      v11 = v11:getDescendantByName("total")
      v13 = v13:formatMoney(v6 + v8 + v7 + v9, 0, true, true)
      v11:setText(...)
      self:setButtonsForState(InGameMenuContractsFrame.BUTTON_STATE.FINISHED)
    end
  end
end
function InGameMenuContractsFrame:updateFieldContractInfo(mission)
  local missionInfo = mission:getData()
  local v9 = v9:getText("fieldJob_contract")
  v3:setText(v9 .. ": " .. missionInfo.jobType)
  v3:setText(missionInfo.action)
  local v7 = mission:getReward()
  local v5 = v5:formatMoney(v7, 0, true, true)
  v3:setText(...)
  local v6 = v6:getText("fieldJob_number")
  v5 = string.format(v6, mission.field.fieldId)
  v3:setText(...)
  v3:setText(missionInfo.description)
end
function InGameMenuContractsFrame:updateTransportContractInfo(mission)
  local missionInfo = mission:getData()
  local v9 = v9:getText("fieldJob_contract")
  v3:setText(v9 .. ": " .. missionInfo.jobType)
  v3:setText(missionInfo.action)
  local v7 = mission:getReward()
  local v5 = v5:formatMoney(v7, 0, true, true)
  v3:setText(...)
  v3:setText("")
  v3:setText(missionInfo.description)
end
function InGameMenuContractsFrame:updateFarmersBox(field, npc)
  if npc == nil then
  end
  v3:setVisible(true)
  if npc ~= nil then
    v3:setText(npc.title)
    v3:setImageFilename(npc.imageFilename)
    if field == nil then
    end
    v3:setVisible(true)
    if field ~= nil then
      local v7 = v7:getText("ui_fieldOwnerOf")
      local v9 = v9:getText("fieldJob_number")
      local v8 = string.format(v9, field.fieldId)
      v9 = v9:formatArea(field.fieldArea, 2)
      local v5 = string.format(...)
      v3:setText(...)
    end
  end
end
function InGameMenuContractsFrame:getSelectedContract()
  local state, canLease = state:getSelectedPath()
  if self.sectionContracts[state] == nil then
    return nil
  end
  return v3.contracts[canLease]
end
function InGameMenuContractsFrame:startContract(leaseVehicles)
  local contract = self:getSelectedContract()
  local v3 = v3:getFarmId()
  local v4 = v4:hasFarmReachedMissionLimit(v3)
  if v4 then
    local v5 = v5:getText("ui_farmAlreadyHasActiveMission")
    InfoDialog.show(v5, nil, nil, DialogElement.TYPE_INFO)
    return
  end
  if leaseVehicles then
    v4 = v4:isSpawnSpaceAvailable()
    if not v4 then
      v5 = v5:getText("warning_noFreeMissionSpace")
      InfoDialog.show(v5, nil, nil, DialogElement.TYPE_WARNING)
      return
    end
  end
  v4 = v4:startMission(contract.mission, v3, leaseVehicles)
  if v4 ~= false and leaseVehicles and g_currentMission.missionInfo.difficulty == 1 and not g_currentMission.missionDynamicInfo.isMultiplayer then
    local v6 = v6:getText("ui_missionVehiclesAtShop")
    InfoDialog.show(v6, nil, nil, DialogElement.TYPE_INFO)
  end
end
function InGameMenuContractsFrame:sortList()
  table.sort(self.contracts, function(self, state)
    if self.active == state.active then
      if self.finished == state.finished then
        if self.mission["type"] == state.mission["type"] then
          if self.mission.field ~= nil then
            -- if v0.mission.field.fieldId then goto L36 end
          end
          if state.mission.field ~= nil then
            -- if v1.mission.field.fieldId then goto L50 end
          end
          if canLease >= 0 then
          end
          return true
        end
        if self.jobType >= state.jobType then
        end
        return true
      end
      if self.finished then
      else
      end
      if state.finished then
      else
      end
      if v4 >= v3 then
      end
      return true
    end
    if self.active then
    else
    end
    if state.active then
    else
    end
    if v4 >= v3 then
    end
    return true
  end)
  self.sectionContracts = {}
  local v4 = v4:getText("fieldJob_active")
  self.sectionContracts[1] = {title = v4, contracts = {}}
  v4 = v4:getText("fieldJob_finished")
  self.sectionContracts[2] = {title = v4, contracts = {}}
  for v6, v7 in ipairs(self.contracts) do
    if v7.active then
      table.insert(self.sectionContracts[1].contracts, v7)
    elseif v7.finished then
      table.insert(self.sectionContracts[2].contracts, v7)
    else
      if canLease ~= v7.mission["type"] then
        table.insert(self.sectionContracts, {title = v7.jobType, contracts = {}})
      end
      table.insert(self.sectionContracts[#self.sectionContracts].contracts, v7)
    end
  end
  if #self.sectionContracts[2].contracts == 0 then
    table.remove(self.sectionContracts, 2)
  end
  if #self.sectionContracts[1].contracts == 0 then
    table.remove(self.sectionContracts, 1)
  end
end
function InGameMenuContractsFrame:updateMarqueeAnimation(dt)
  self.marqueeTime = self.marqueeTime + dt
  if 9000 * (self.vehiclesBox.absSize[1] - self.vehiclesBox.parent.absSize[1]) / self.vehiclesBox.parent.absSize[1] <= self.marqueeTime then
    self.marqueeTime = -(9000 * (self.vehiclesBox.absSize[1] - self.vehiclesBox.parent.absSize[1]) / self.vehiclesBox.parent.absSize[1])
  end
  local v11 = math.abs(self.marqueeTime)
  local v7 = MathUtil.smoothstep(0.2, 0.8, v11 / v6)
  v9:setPosition(-(v4 * v7))
end
function InGameMenuContractsFrame:getNumberOfSections()
  return #self.sectionContracts
end
function InGameMenuContractsFrame:getNumberOfItemsInSection(list, section)
  return #self.sectionContracts[section].contracts
end
function InGameMenuContractsFrame:getTitleForSectionHeader(list, section)
  return self.sectionContracts[section].title
end
function InGameMenuContractsFrame:populateCellForItemInSection(list, section, index, cell)
  local v7 = self.sectionContracts[section].contracts[index].mission:getData()
  local v8 = cell:getAttribute("contract")
  v8:setText(v7.jobType)
  v8 = cell:getAttribute("reward")
  local v12 = self.sectionContracts[section].contracts[index].mission:getReward()
  local v10 = v10:formatMoney(v12, 0, true, true)
  v8:setText(...)
  v8 = cell:getAttribute("field")
  v8:setText(v7.location)
  v8 = cell:getAttribute("indicatorActive")
  v8:setVisible(self.sectionContracts[section].contracts[index].active)
  v8 = cell:getAttribute("indicatorFinished")
  if self.sectionContracts[section].contracts[index].finished then
  end
  v8:setVisible(v10)
  v8 = cell:getAttribute("indicatorFailed")
  if v5.finished then
  end
  v8:setVisible(v10)
end
function InGameMenuContractsFrame:onButtonAccept()
  self:startContract(false)
end
function InGameMenuContractsFrame:onButtonLease()
  self:startContract(true)
end
function InGameMenuContractsFrame:onButtonDismiss()
  local contract = self:getSelectedContract()
  canLease:dismissMission(contract.mission)
end
function InGameMenuContractsFrame:onButtonCancel()
  local v4 = v4:getText("fieldJob_endContract")
  YesNoDialog.show(...)
end
function InGameMenuContractsFrame:onCancelDialog(yes)
  if yes then
    local contract = self:getSelectedContract()
    v3:cancelMission(contract.mission)
  end
end
function InGameMenuContractsFrame:onListSelectionChanged(list, section, index)
  if self.sectionContracts[section] ~= nil and self.sectionContracts[section].contracts[index] ~= nil then
    self:updateDetailContents(section, index)
    self.marqueeTime = 0
    self:playSample(GuiSoundPlayer.SOUND_SAMPLES.HOVER)
  end
end
