// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stripUnreachableEpilogue
// Entry Point: 00c3e554
// Size: 192 bytes
// Signature: undefined stripUnreachableEpilogue(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_InstructionSequence::stripUnreachableEpilogue() */

void IR_InstructionSequence::stripUnreachableEpilogue(void)

{
  long lVar1;
  long in_x0;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(in_x0 + 0x20);
  lVar4 = *(long *)(in_x0 + 0x28);
  if (lVar4 - lVar3 != 0) {
    uVar6 = 0;
    uVar5 = lVar4 - lVar3 >> 3;
    do {
      lVar1 = uVar6 * 8;
      uVar6 = (ulong)((int)uVar6 + 1);
      if (**(int **)(lVar3 + lVar1) - 6U < 4) {
        uVar7 = uVar6;
        if (uVar6 < uVar5) {
          do {
            pvVar2 = *(void **)(lVar3 + uVar7 * 8);
            if (pvVar2 != (void *)0x0) {
              operator_delete(pvVar2);
              lVar3 = *(long *)(in_x0 + 0x20);
              lVar4 = *(long *)(in_x0 + 0x28);
            }
            uVar7 = (ulong)((int)uVar7 + 1);
            uVar5 = lVar4 - lVar3 >> 3;
          } while (uVar7 < uVar5);
        }
        if (uVar5 > uVar6 || uVar6 - uVar5 == 0) {
          if (uVar5 <= uVar6) {
            return;
          }
          *(ulong *)(in_x0 + 0x28) = lVar3 + uVar6 * 8;
          return;
        }
        std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::__append
                  ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)
                   (long *)(in_x0 + 0x20),uVar6 - uVar5);
        return;
      }
    } while (uVar6 < uVar5);
  }
  return;
}


