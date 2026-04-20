-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

InGameMenuStatisticsFrame = {}
local InGameMenuStatisticsFrame_mt = Class(InGameMenuStatisticsFrame, TabbedMenuFrameElement)
if GS_IS_MOBILE_VERSION then
  -- if math.huge then goto L21 end
end
v1.STATISTICS_PER_BOX = 16
InGameMenuStatisticsFrame.CONTROLS = {"statisticsList1", "statisticsList2"}
function InGameMenuStatisticsFrame.register()
  local v0 = InGameMenuStatisticsFrame.new()
  v1:loadGui("dataS/gui/InGameMenuStatisticsFrame.xml", "StatisticsFrame", v0, true)
end
function InGameMenuStatisticsFrame.new(v0, v1)
  if not v1 then
  end
  local v2 = v2(v3, v4)
  v2:registerControls(InGameMenuStatisticsFrame.CONTROLS)
  v2.isInitialized = false
  v2.statsIndices = {}
  v2.statisticsLists = {}
  v2.playerFarm = nil
  v2.firstIndex = 1
  return v2
end
function InGameMenuStatisticsFrame:createFromExistingGui(v1)
  local v2 = InGameMenuStatisticsFrame.new()
  v3:delete()
  v3:delete()
  v3:loadGui(self.xmlFilename, v1, v2, true)
  return v2
end
function InGameMenuStatisticsFrame:initializeLists()
  if not self.isInitialized then
    table.insert(self.statisticsLists, self.statisticsList1)
    if self.statisticsList2 ~= nil then
      if not GS_IS_MOBILE_VERSION then
        table.insert(self.statisticsLists, self.statisticsList2)
      else
        v1:delete()
      end
    end
    local v3 = v3:getStatisticData()
    self.statsData = v3
    for v6, v7 in ipairs(self.statsData) do
      if v2 ~= nil then
        -- if InGameMenuStatisticsFrame.STATISTICS_PER_BOX > #v0.statsIndices[v2] then goto L74 end
      end
      if not (self.statisticsLists[v1 + 1] ~= nil) then
        break
      end
      self.statsIndices[self.statisticsLists[v1 + 1]] = {}
      table.insert(self.statsIndices[self.statisticsLists[v1 + 1]], v6)
    end
    self.isInitialized = true
  end
end
function InGameMenuStatisticsFrame:onFrameOpen(element)
  local v3 = v3:superClass()
  v3.onFrameOpen(self)
  self:initializeLists()
  self:updateStatistics()
end
function InGameMenuStatisticsFrame:getData()
  return v1:getStatisticData()
end
function InGameMenuStatisticsFrame:updateStatistics()
  local v1 = v1:getStatisticData()
  self.statsData = v1
  for v4, v5 in ipairs(self.statisticsLists) do
    v5:reloadData()
  end
end
function InGameMenuStatisticsFrame:setPlayerFarm(playerFarm)
  self.playerFarm = playerFarm
end
function InGameMenuStatisticsFrame:getMainElementSize()
  return self.statsContainer.size
end
function InGameMenuStatisticsFrame:getMainElementPosition()
  return self.statsContainer.absPosition
end
function InGameMenuStatisticsFrame:getNumberOfItemsInSection(v1, v2)
  return #self.statsIndices[v1]
end
function InGameMenuStatisticsFrame:populateCellForItemInSection(v1, v2, v3, v4)
  local v7 = v4:getAttribute("name")
  v7:setText(self.statsData[self.statsIndices[v1][v3]].name)
  v7 = v4:getAttribute("session")
  v7:setText(self.statsData[self.statsIndices[v1][v3]].valueSession)
  v7 = v4:getAttribute("total")
  v7:setText(self.statsData[self.statsIndices[v1][v3]].valueTotal)
end
