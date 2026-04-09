// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: replaceOuterLoopRegWithField
// Entry Point: 00c47770
// Size: 80 bytes
// Signature: undefined __thiscall replaceOuterLoopRegWithField(IR_Section * this, vector * param_1, uint param_2, uint param_3)


/* IR_Section::replaceOuterLoopRegWithField(std::__ndk1::vector<IR_Section::LoopRegInfo,
   std::__ndk1::allocator<IR_Section::LoopRegInfo> >&, unsigned int, unsigned int) */

void __thiscall
IR_Section::replaceOuterLoopRegWithField(IR_Section *this,vector *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)param_1;
  lVar3 = *(long *)(param_1 + 8) - lVar2;
  if (lVar3 != 0) {
    uVar4 = 0;
    do {
      puVar1 = (uint *)(lVar2 + uVar4 * 0x10);
      if (*puVar1 == param_2) {
        *puVar1 = param_3;
      }
      if (puVar1[3] == param_2) {
        puVar1[3] = param_3;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(lVar3 >> 4));
  }
  return;
}


