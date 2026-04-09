// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 006f8d70
// Size: 128 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AdsBrockerManager::reset() */

void AdsBrockerManager::reset(void)

{
  BillboardShape **ppBVar1;
  long *in_x0;
  BillboardShape *this;
  BillboardShape **ppBVar2;
  
  Mutex::enterCriticalSection();
  ppBVar2 = (BillboardShape **)*in_x0;
  ppBVar1 = (BillboardShape **)in_x0[1];
  if (ppBVar2 != ppBVar1) {
    do {
      this = *ppBVar2;
      if (this != (BillboardShape *)0x0) {
        BillboardShape::~BillboardShape(this);
        operator_delete(this);
      }
      ppBVar2 = ppBVar2 + 1;
    } while (ppBVar2 != ppBVar1);
    ppBVar2 = (BillboardShape **)*in_x0;
  }
  in_x0[1] = (long)ppBVar2;
  in_x0[3] = 0;
  in_x0[4] = 0;
  Mutex::leaveCriticalSection();
  return;
}


