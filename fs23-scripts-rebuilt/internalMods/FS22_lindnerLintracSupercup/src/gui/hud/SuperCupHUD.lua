-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

SuperCupHUD = {}
local SuperCupHUD_mt = Class(SuperCupHUD)
function SuperCupHUD.new(modDirectory, gameInfoDisplay)
  local v2 = setmetatable({}, u0)
  v2.modDirectory = modDirectory
  v2.gameInfoDisplay = gameInfoDisplay
  local v3 = Utils.getFilename("resources/gui/hud_icons.png", modDirectory)
  v2.uiFilename = v3
  v2.atlasRefSize = {256, 64}
  v2.isActive = false
  v2.timer = nil
  v2.penaltyPoints = 0
  v2.samples = {}
  return v2
end
function SuperCupHUD:loadSamples()
  self.samples = {}
  local filename = Utils.getFilename("resources/sounds/sounds.xml", self.modDirectory)
  local xmlFile = XMLFile.load("superCupSounds", filename)
  if xmlFile == nil then
    return
  end
  local v4 = v4:loadSample2DFromXML(xmlFile.handle, "superCup.sounds", "countdown", self.modDirectory, 1, AudioGroup.ENVIRONMENT)
  self.samples.countdown = v4
  v4 = v4:loadSample2DFromXML(xmlFile.handle, "superCup.sounds", "go", self.modDirectory, 1, AudioGroup.ENVIRONMENT)
  self.samples.go = v4
  xmlFile:delete()
end
function SuperCupHUD:delete()
  self:setIsActive(false)
  if self.timer ~= nil then
    v1:delete()
  end
  if self.ballIcon ~= nil then
    v1:delete()
  end
  if self.timeIcon ~= nil then
    v1:delete()
  end
  if self.separator ~= nil then
    v1:delete()
  end
  for v4, v5 in pairs(self.samples) do
    v6:deleteSample(v5)
  end
end
function SuperCupHUD:playSampleByName(name)
  if self.samples[name] ~= nil then
    local v3 = v3:getIsSamplePlaying(self.samples[name])
    if not v3 then
      v3:playSample(self.samples[name])
    end
  end
end
function SuperCupHUD:playCountdownSample()
  self:playSampleByName("countdown")
end
function SuperCupHUD:playGoSample()
  self:playSampleByName("go")
end
function SuperCupHUD:setFarmContext(farmId)
  self.farmId = farmId
end
function SuperCupHUD:loadFromXML(xmlFile, baseKey)
  self:loadSamples()
  local v3, v4 = v3:getPosition()
  local v5, v6 = GameInfoDisplay.getBackgroundPosition(1)
  local v7, v8 = v7:scalePixelToScreenVector(SuperCupHUD.MARGIN.BOX)
  local v9, v10 = v9:scalePixelToScreenVector(SuperCupHUD.SIZE.ICON)
  local v11, v12 = v11:scalePixelToScreenVector(SuperCupHUD.MARGIN.TEXT)
  local v13 = v13:scalePixelToScreenHeight(SuperCupHUD.TEXT_SIZE.COUNT)
  self.textSize = v13
  local v16, v17 = self:createIcon(self.uiFilename, 0.5 - v9 - v7, v6 + v8, SuperCupHUD.POSITION.BALL, SuperCupHUD.SIZE.ICON, SuperCupHUD.UV.BALL)
  self.ballIcon = v16
  self.ballTextX = v17 + v7 + v11 + v9
  v16 = v16:createVerticalSeparator(g_baseHUDFilename, 0.5, v6 - v10 * 0.5 + v12)
  self.separator = v16
  v16:addChild(self.separator)
  v16, v17 = self:createIcon(self.uiFilename, 0.5 + v7, v6 + v8, SuperCupHUD.POSITION.TIMER, SuperCupHUD.SIZE.ICON, SuperCupHUD.UV.TIMER)
  self.timeIcon = v16
  self.timeTextX = v17 + v9
  self.timeTextY = v6 - v10 * 0.5 - self.textSize * 0.5 + v12
  self.ballTextY = v6 - v10 * 0.5 - self.textSize * 0.5 + v12
  self:setIsActive(false)
end
function SuperCupHUD:draw()
  local v1 = self:getCanRender()
  if not v1 then
    return
  end
  if self.timer ~= nil then
    local v3 = self.timer:getElapsedTime()
    -- if v3 then goto L16 end
  end
  local v2 = v2(0)
  self:drawTextElement({x = self.timeTextX, y = self.timeTextY, text = v2, bold = true, textSize = self.textSize, textAlignment = RenderText.ALIGN_LEFT})
  local v6 = v6:format(self.penaltyPoints)
  self:drawTextElement({x = self.ballTextX, y = self.ballTextY, text = v6, bold = true, textSize = self.textSize})
end
function SuperCupHUD:getCanRender()
  if self.isActive then
    local v1 = v1:getVisible()
    if v1 then
      v1 = v1:getVisible()
      if v1 then
        v1 = v1:getIsVisible()
        if v1 then
          local v2 = v2:getIsGuiVisible()
        end
      end
    end
  end
  return v1
end
function SuperCupHUD:canInteractWithFarm(farmId)
  if self.farmId ~= farmId then
  end
  return true
end
function SuperCupHUD:setIsActive(isActive)
  self.isActive = isActive
  if self.separator ~= nil then
    v2:setVisible(isActive)
    v2:setVisible(isActive)
    v2:setVisible(isActive)
  end
end
function SuperCupHUD:setTimer(timer)
  self.timer = timer
end
function SuperCupHUD:setPenaltyPoints(penaltyPoints)
  self.penaltyPoints = penaltyPoints
end
function SuperCupHUD.drawTextElement(v0, v1)
  if not v1.color then
  end
  local v3 = unpack(v4)
  v2(...)
  setTextBold(v1.bold or false)
  if not v1.textSize then
    local v2 = getCorrectTextSize(0.022)
  end
  if not v1.textAlignment then
  end
  v3(v4)
  renderText(v1.x, v1.y, v2, v1.text)
end
function SuperCupHUD:createIcon(imagePath, baseX, baseY, position, size, uvs)
  local v7, v8 = v7:scalePixelToScreenVector(position)
  local v9, v10 = v9:scalePixelToScreenVector(size)
  local v12 = Overlay.new(imagePath, baseX + v7, baseY - v10 + v8, v9, v10)
  local v15 = GuiUtils.getUVs(uvs, self.atlasRefSize)
  v12:setUVs(...)
  local v13 = HUDElement.new(v12)
  v14:addChild(v13)
  v13:setVisible(true)
  return v13, baseX + v7
end
SuperCupHUD.SIZE = {ICON = {52, 52}}
SuperCupHUD.MARGIN = {BOX = {0, 0}, TEXT = {15, 0}}
SuperCupHUD.POSITION = {BALL = {-40, 0}, TIMER = {10, 0}}
SuperCupHUD.UV = {BALL = {0, 0, 64, 64}, TIMER = {64, 0, 64, 64}}
SuperCupHUD.TEXT_SIZE = {COUNT = 22}
