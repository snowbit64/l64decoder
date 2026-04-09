// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_make_asm_string
// Entry Point: 00c140f4
// Size: 224 bytes
// Signature: undefined __thiscall ir_make_asm_string(GISLParserUtil * this, SHC_String * param_1, GsTSourceLoc param_2, bool param_3, GISLParserContext * param_4)


/* GISLParserUtil::ir_make_asm_string(SHC_String*, GsTSourceLoc, bool, GISLParserContext&) */

undefined8 * __thiscall
GISLParserUtil::ir_make_asm_string
          (GISLParserUtil *this,SHC_String *param_1,GsTSourceLoc param_2,bool param_3,
          GISLParserContext *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  IR_TypeSet *this_00;
  uint local_74;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (this == (GISLParserUtil *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_4 + 0x58),0x60)
    ;
    this_00 = **(IR_TypeSet ***)(param_4 + 0x58);
    uVar3 = IR_TypeSet::getScalarType(this_00,0);
    puVar2[4] = uVar3;
    *(undefined8 *)((long)puVar2 + 0x34) = 0;
    *(ulong *)((long)puVar2 + 0x2c) = (ulong)local_74;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(uint *)(puVar2 + 9) = param_3 & 1;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[10] = this;
    puVar2[0xb] = 0;
    puVar2[2] = (ulong)param_2;
    puVar2[3] = this_00;
    *puVar2 = &PTR_traverse_00fed5f8;
    puVar2[1] = param_1;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


