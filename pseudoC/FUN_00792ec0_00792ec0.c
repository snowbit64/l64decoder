// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00792ec0
// Entry Point: 00792ec0
// Size: 72 bytes
// Signature: undefined FUN_00792ec0(void)


void FUN_00792ec0(uint *param_1)

{
  bool bVar1;
  I3DManager *this;
  
  if (param_1[6] == 3) {
    bVar1 = *(char *)(param_1 + 4) == '\0';
  }
  else {
    bVar1 = true;
  }
  this = (I3DManager *)I3DManager::getInstance();
  I3DManager::releaseSharedI3D(this,*param_1,bVar1);
  return;
}


