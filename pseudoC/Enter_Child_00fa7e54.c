// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Enter_Child
// Entry Point: 00fa7e54
// Size: 80 bytes
// Signature: undefined __thiscall Enter_Child(CProfileIterator * this, int param_1)


/* CProfileIterator::Enter_Child(int) */

void __thiscall CProfileIterator::Enter_Child(CProfileIterator *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar3 = *(long *)(*(long *)this + 0x28);
  bVar2 = lVar3 != 0;
  *(long *)(this + 8) = lVar3;
  if (bVar2 && param_1 != 0) {
    iVar5 = param_1 + -1;
    do {
      lVar3 = *(long *)(lVar3 + 0x30);
      bVar2 = lVar3 != 0;
      *(long *)(this + 8) = lVar3;
      bVar1 = iVar5 != 0;
      iVar5 = iVar5 + -1;
      if (lVar3 == 0) break;
    } while (bVar1);
  }
  if (bVar2) {
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)this = lVar3;
    *(undefined8 *)(this + 8) = uVar4;
  }
  return;
}


