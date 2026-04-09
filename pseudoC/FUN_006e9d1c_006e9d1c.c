// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9d1c
// Entry Point: 006e9d1c
// Size: 68 bytes
// Signature: undefined FUN_006e9d1c(void)


void FUN_006e9d1c(uint *param_1)

{
  AdsBrockerManager *this;
  uint uVar1;
  
  this = (AdsBrockerManager *)AdsBrockerManager::getInstance();
  uVar1 = AdsBrockerManager::addOcclusionRegion
                    (this,*param_1,(float)param_1[4],(float)param_1[8],(float)param_1[0xc],
                     (float)param_1[0x10]);
  param_1[0x40] = uVar1;
  param_1[0x42] = 1;
  return;
}


