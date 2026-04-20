-- Reconstructed Luau source (luauc64 0.1.0).
-- This is a best-effort lift from bytecode; review before running.

ConfigurationManager = {}
local ConfigurationManager_mt = Class(ConfigurationManager, AbstractManager)
function ConfigurationManager.new(customMt)
  if not customMt then
  end
  local v1 = v1(v2)
  v1:initDataStructures()
  return v1
end
function ConfigurationManager:initDataStructures()
  self.configurations = {}
  self.intToConfigurationName = {}
  self.configurationNameToInt = {}
  self.sortedConfigurationNames = {}
end
function ConfigurationManager:addConfigurationType(name, title, xmlKey, preLoadFunc, singleItemLoadFunc, postLoadFunc, selectorType, subConfigurationTitle, getSubConfigurationValuesFunc, getItemsBySubConfigurationIdentifierFunc, priority)
  if self.configurations[name] ~= nil then
    print("Error: configuration name '" .. name .. "' is already in use!")
    return
  end
  local v12 = self:getNumOfConfigurationTypes()
  if 2 ^ ConfigurationUtil.SEND_NUM_BITS <= v12 then
    print("Error: ConfigurationManager.addConfigurationType too many configuration types. Only " .. 2 ^ ConfigurationUtil.SEND_NUM_BITS .. " configuration types are supported")
    return
  end
  local v13 = Utils.getNoNil(selectorType, ConfigurationUtil.SELECTOR_MULTIOPTION)
  if getSubConfigurationValuesFunc == nil then
  end
  v12.hasSubselection = true
  if not priority then
  end
  v12.priority = v13
  self.configurations[name] = v12
  table.insert(self.intToConfigurationName, name)
  local v14 = self:getNumOfConfigurationTypes()
  self.configurationNameToInt[name] = v14
  table.insert(self.sortedConfigurationNames, name)
  table.sort(self.sortedConfigurationNames, function(self, name)
    if u0.configurations[self].priority >= u0.configurations[name].priority then
    end
    return true
  end)
  print("  Register configuration '" .. name .. "'")
end
function ConfigurationManager:getNumOfConfigurationTypes()
  return #self.intToConfigurationName
end
function ConfigurationManager:getConfigurationTypes()
  return self.intToConfigurationName
end
function ConfigurationManager:getSortedConfigurationTypes()
  return self.sortedConfigurationNames
end
function ConfigurationManager:getConfigurationNameByIndex(index)
  return self.intToConfigurationName[index]
end
function ConfigurationManager:getConfigurationIndexByName(name)
  return self.configurationNameToInt[name]
end
function ConfigurationManager:getConfigurations()
  return self.configurations
end
function ConfigurationManager:getConfigurationDescByName(name)
  return self.configurations[name]
end
function ConfigurationManager:getConfigurationAttribute(configurationName, attribute)
  local config = self:getConfigurationDescByName(configurationName)
  return config[attribute]
end
local v1 = ConfigurationManager.new()
g_configurationManager = v1
