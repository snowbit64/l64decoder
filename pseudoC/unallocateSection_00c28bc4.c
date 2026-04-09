// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unallocateSection
// Entry Point: 00c28bc4
// Size: 196 bytes
// Signature: undefined __thiscall unallocateSection(IR_Function * this, IR_Section * param_1)


/* IR_Function::unallocateSection(IR_Section*) */

void __thiscall IR_Function::unallocateSection(IR_Function *this,IR_Section *param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = *(long *)(this + 0xb8);
  lVar2 = *(long *)(this + 0xc0);
  lVar6 = lVar2 - lVar1;
  if (lVar6 != 0) {
    uVar5 = 0;
    uVar3 = lVar6 >> 3;
    do {
      uVar4 = (uint)uVar5;
      if (*(IR_Section **)(lVar1 + uVar5 * 8) == param_1) {
        __dest = (void *)(lVar1 + uVar5 * 8);
        while( true ) {
          uVar4 = uVar4 + 1;
          if (uVar3 <= uVar4) break;
          lVar6 = *(long *)(lVar1 + (ulong)uVar4 * 8);
          *(int *)(lVar6 + 0x3c) = *(int *)(lVar6 + 0x3c) + -1;
        }
        __n = lVar2 - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(this + 0xc0) = (long)__dest + __n;
        if (param_1 != (IR_Section *)0x0) {
          IR_Section::~IR_Section(param_1);
          operator_delete(param_1);
        }
        *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + -1;
        return;
      }
      uVar5 = (ulong)(uVar4 + 1);
    } while (uVar5 < uVar3);
  }
  return;
}


