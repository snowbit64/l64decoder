-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

GreatDemandSpecs = {}
local GreatDemandSpecs_mt = Class(GreatDemandSpecs)
function GreatDemandSpecs.new(customMt)
  if customMt == nil then
  end
  setmetatable({}, customMt)
  return {sellStation = nil, fillTypeIndex = 0, demandMultiplier = 1, demandStart = {day = 0, hour = 0}, demandDuration = 0, isRunning = false, isValid = false}
end
function GreatDemandSpecs.getIsDateEarlier(v0, v1, v2, v3, v4)
  if v1 >= v3 and v1 == v3 and v2 >= v4 then
  end
  return v5
end
function GreatDemandSpecs:setUpRandomDemand(weighted, greatDemands, mission)
  self.isRunning = false
  self.isValid = false
  self.fillTypeIndex = 0
  local v5 = math.random(11, 14)
  self.demandMultiplier = v5 / 10
  local v7 = math.random(2, 5)
  self.demandStart.day = mission.environment.currentMonotonicDay + v7
  v5 = math.random(7, 18)
  self.demandStart.hour = v5
  v5 = math.random(1, 4)
  self.demandDuration = v5 * 6
  for v8, v9 in pairs(greatDemands) do
    if not (v9 ~= self) then
      continue
    end
    if not v9.isValid then
      continue
    end
    v4[v9.sellStation] = true
  end
  v7 = v7:getUnloadingStations()
  for v9, v10 in pairs(...) do
    if not v10.supportsGreatDemand then
      continue
    end
    if not (v10.getSupportsGreatDemand ~= nil) then
      continue
    end
    if not not v10.isGreatDemandActive then
      continue
    end
    if not (v4[v10] == nil) then
      continue
    end
    table.insert(v5, v10)
  end
  if 0 < #v5 then
    v7 = math.random(1, #v5)
    self.sellStation = v5[v7]
    v8, v9 = math.modf((self.demandStart.hour + self.demandDuration) / 24)
    if greatDemands ~= nil then
      for v15, v16 in pairs(greatDemands) do
        if not (v16 ~= self) then
          continue
        end
        if not v16.isValid then
          continue
        end
        if not (self.sellStation == v16.sellStation) then
          continue
        end
        local v18, v19 = math.modf((v16.demandStart.hour + v16.demandDuration) / 24)
        local v21 = self:getIsDateEarlier(v10, v9, v16.demandStart.day, v16.demandStart.hour)
        if not not v21 then
          continue
        end
        v21 = self:getIsDateEarlier(v16.demandStart.day + v18, v19 * 24, v7.day, v7.hour)
        if not not v21 then
          continue
        end
        v11[v16.fillTypeIndex] = true
      end
    end
    for v16, v17 in pairs(v6.acceptedFillTypes) do
      if not v17 then
        continue
      end
      if not (v11[v16] == nil) then
        continue
      end
      if not v6.fillTypeSupportsGreatDemand[v16] then
        continue
      end
      table.insert(v12, v16)
    end
    if 0 < #v12 then
      if weighted then
        for v17, v18 in pairs(v12) do
          v19 = v19:getFillTypeByIndex(v18)
        end
        -- if 0 >= v13 then goto L310 end
        for v19, v20 in pairs(v12) do
          v21 = v21:getFillTypeByIndex(v20)
          local v22 = math.max(v21.totalAmount / v13, 0.000001)
          table.insert(v15, {fillTypeIndex = v20, inverseRatio = 1 / v22})
        end
        v16 = math.random()
        for v20, v21 in pairs(v15) do
          if not (v16 - v21.inverseRatio / v14 <= 0.0001) then
            continue
          end
          self.fillTypeIndex = v21.fillTypeIndex
          -- goto L310  (LOP_JUMP +11)
        end
      else
        v14 = math.random(1, #v12)
        self.fillTypeIndex = v12[v14]
      end
      if self.fillTypeIndex ~= 0 then
        self.isValid = true
      end
    end
  end
end
