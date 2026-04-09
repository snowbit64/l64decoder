// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: replaceInnerLoopRegWithField
// Entry Point: 00c4771c
// Size: 84 bytes
// Signature: undefined __thiscall replaceInnerLoopRegWithField(IR_Section * this, vector * param_1, uint param_2, uint param_3)


/* IR_Section::replaceInnerLoopRegWithField(std::__ndk1::vector<IR_Section::LoopRegInfo,
   std::__ndk1::allocator<IR_Section::LoopRegInfo> >&, unsigned int, unsigned int) */

void __thiscall
IR_Section::replaceInnerLoopRegWithField(IR_Section *this,vector *param_1,uint param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  
  lVar2 = *(long *)param_1;
  lVar3 = *(long *)(param_1 + 8) - lVar2;
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      lVar1 = lVar2 + uVar4 * 0x10;
      puVar5 = (uint *)(lVar1 + 4);
      if (*puVar5 == param_2) {
        *puVar5 = param_3;
      }
      puVar5 = (uint *)(lVar1 + 8);
      if (*puVar5 == param_2) {
        *puVar5 = param_3;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(lVar3 >> 4));
  }
  return;
}


