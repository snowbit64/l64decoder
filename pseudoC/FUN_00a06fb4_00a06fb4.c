// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a06fb4
// Entry Point: 00a06fb4
// Size: 108 bytes
// Signature: undefined FUN_00a06fb4(void)


void FUN_00a06fb4(TempData **param_1)

{
  TempData *pTVar1;
  TempData *this;
  TempData *pTVar2;
  
  pTVar2 = *param_1;
  if (pTVar2 == (TempData *)0x0) {
    return;
  }
  this = param_1[1];
  pTVar1 = pTVar2;
  if (this != pTVar2) {
    do {
      this = this + -0xa8;
      RenderQueueItemAllocator::TempData::~TempData(this);
    } while (this != pTVar2);
    pTVar1 = *param_1;
  }
  param_1[1] = pTVar2;
  operator_delete(pTVar1);
  return;
}


