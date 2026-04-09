// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00dda984
// Size: 176 bytes
// Signature: undefined __thiscall resize(rcIntArray * this, int param_1)


/* rcIntArray::resize(int) */

void __thiscall rcIntArray::resize(rcIntArray *this,int param_1)

{
  int iVar1;
  void *__dest;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  if (param_1 <= iVar2) goto LAB_00ddaa20;
  iVar1 = param_1;
  if (iVar2 == 0) {
LAB_00dda9c8:
    iVar2 = iVar1;
    *(int *)(this + 0xc) = iVar2;
  }
  else if (iVar2 < param_1) {
    do {
      iVar2 = iVar2 * 2;
      iVar1 = iVar2;
    } while (iVar2 < param_1);
    goto LAB_00dda9c8;
  }
  __dest = (void *)(*(code *)PTR_FUN_01048420)(iVar2 << 2,1);
  if ((__dest != (void *)0x0) && (*(int *)(this + 8) != 0)) {
    memcpy(__dest,*(void **)this,(long)*(int *)(this + 8) << 2);
  }
  if (*(long *)this != 0) {
    (*(code *)PTR_free_01048428)();
  }
  *(void **)this = __dest;
LAB_00ddaa20:
  *(int *)(this + 8) = param_1;
  return;
}


