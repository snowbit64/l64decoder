// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: neib
// Entry Point: 00f9be48
// Size: 144 bytes
// Signature: undefined __thiscall neib(btHullTriangle * this, int param_1, int param_2)


/* btHullTriangle::neib(int, int) */

undefined4 * __thiscall btHullTriangle::neib(btHullTriangle *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(this + 4);
  if ((iVar1 == param_1 && iVar2 == param_2) || ((iVar1 == param_2 && (iVar2 == param_1)))) {
    lVar4 = 2;
  }
  else {
    iVar3 = *(int *)(this + 8);
    if (((iVar2 == param_1) && (iVar3 == param_2)) || ((iVar2 == param_2 && (iVar3 == param_1)))) {
      lVar4 = 0;
    }
    else {
      if ((iVar3 != param_1) || (iVar1 != param_2)) {
        if (iVar3 != param_2) {
          return &DAT_01048e5c;
        }
        if (iVar1 != param_1) {
          return &DAT_01048e5c;
        }
      }
      lVar4 = 1;
    }
  }
  return (undefined4 *)(this + lVar4 * 4 + 0xc);
}


