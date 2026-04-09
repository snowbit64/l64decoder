// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginInst
// Entry Point: 00c3c7a4
// Size: 400 bytes
// Signature: undefined __thiscall beginInst(IR_InstructionSequence * this, IR_OPCODE param_1, uint param_2, uint param_3)


/* IR_InstructionSequence::beginInst(IR_OPCODE, unsigned int, unsigned int) */

void __thiscall
IR_InstructionSequence::beginInst
          (IR_InstructionSequence *this,IR_OPCODE param_1,uint param_2,uint param_3)

{
  uint uVar1;
  IR_OPCODE *pIVar2;
  void *__dest;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  size_t __n;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = *(uint **)(this + 8);
  puVar3 = *(uint **)(this + 0x18);
  *(uint **)(this + 0x10) = puVar6;
  if (puVar6 < puVar3) {
    puVar7 = puVar6 + 1;
    *puVar6 = param_1;
    *(uint **)(this + 0x10) = puVar7;
  }
  else {
    uVar5 = (long)puVar3 - (long)puVar6;
    uVar4 = (long)uVar5 >> 1;
    if (uVar5 == 0) {
      uVar4 = 1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar4 = 0x3fffffffffffffff;
    }
    if (uVar4 >> 0x3e != 0) goto LAB_00c3c920;
    pIVar2 = (IR_OPCODE *)operator_new(uVar4 * 4);
    puVar3 = pIVar2 + uVar4;
    puVar7 = pIVar2 + 1;
    *pIVar2 = param_1;
    *(IR_OPCODE **)(this + 8) = pIVar2;
    *(uint **)(this + 0x10) = puVar7;
    *(uint **)(this + 0x18) = puVar3;
    if (puVar6 != (uint *)0x0) {
      operator_delete(puVar6);
      puVar7 = *(uint **)(this + 0x10);
      puVar3 = *(uint **)(this + 0x18);
    }
  }
  uVar1 = param_3 | param_2 << 0x10;
  if (puVar7 < puVar3) {
    *puVar7 = uVar1;
    *(uint **)(this + 0x10) = puVar7 + 1;
  }
  else {
    puVar6 = *(uint **)(this + 8);
    __n = (long)puVar7 - (long)puVar6;
    uVar4 = ((long)__n >> 2) + 1;
    if (uVar4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = (long)puVar3 - (long)puVar6 >> 1;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (0x7ffffffffffffffb < (ulong)((long)puVar3 - (long)puVar6)) {
      uVar4 = 0x3fffffffffffffff;
    }
    if (uVar4 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar4 >> 0x3e != 0) {
LAB_00c3c920:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar4 << 2);
    }
    puVar3 = (uint *)((long)__dest + ((long)__n >> 2) * 4);
    *puVar3 = uVar1;
    if (0 < (long)__n) {
      memcpy(__dest,puVar6,__n);
    }
    *(void **)(this + 8) = __dest;
    *(uint **)(this + 0x10) = puVar3 + 1;
    *(void **)(this + 0x18) = (void *)((long)__dest + uVar4 * 4);
    if (puVar6 != (uint *)0x0) {
      operator_delete(puVar6);
      return;
    }
  }
  return;
}


