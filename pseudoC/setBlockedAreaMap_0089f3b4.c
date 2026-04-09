// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlockedAreaMap
// Entry Point: 0089f3b4
// Size: 304 bytes
// Signature: undefined __thiscall setBlockedAreaMap(TerrainDeformation * this, DensityMap * param_1, uint param_2)


/* TerrainDeformation::setBlockedAreaMap(DensityMap*, unsigned int) */

undefined8 __thiscall
TerrainDeformation::setBlockedAreaMap(TerrainDeformation *this,DensityMap *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  Logger *this_00;
  
  iVar1 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if ((iVar1 == *(int *)(this + 0x40) + -1) &&
     (iVar1 = (**(code **)(*(long *)param_1 + 0x50))(param_1), iVar1 == *(int *)(this + 0x40) + -1))
  {
    uVar2 = 1;
    *(DensityMap **)(this + 0xa8) = param_1;
    *(uint *)(this + 0xb4) = param_2;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 0089f4a4 to 0089f4ab has its CatchHandler @ 0089f4f4 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0089f4b0 to 0089f4b3 has its CatchHandler @ 0089f4e4 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar3 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
    uVar4 = (**(code **)(*(long *)param_1 + 0x50))(param_1);
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Blocked area map is wrong size for terrain (%u x %u) vs (%u x %u)\n",
                       uVar3 & 0xffffffff,uVar4 & 0xffffffff,(ulong)(*(int *)(this + 0x40) - 1),
                       (ulong)(*(int *)(this + 0x40) - 1));
    uVar2 = 0;
  }
  return uVar2;
}


