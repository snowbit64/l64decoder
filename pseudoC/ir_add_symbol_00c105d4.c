// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_symbol
// Entry Point: 00c105d4
// Size: 144 bytes
// Signature: undefined __thiscall ir_add_symbol(GISLParserUtil * this, GsTVariable * param_1, GsTSourceLoc param_2, GISLParserContext * param_3)


/* GISLParserUtil::ir_add_symbol(GsTVariable const*, GsTSourceLoc, GISLParserContext&) */

void __thiscall
GISLParserUtil::ir_add_symbol
          (GISLParserUtil *this,GsTVariable *param_1,GsTSourceLoc param_2,GISLParserContext *param_3
          )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x10);
  uVar3 = *(undefined4 *)(this + 0x18);
  puVar4 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_3 + 0x58),0x60);
  *puVar4 = &PTR___cxa_pure_virtual_00fed450;
  puVar4[1] = 0;
  puVar4[2] = 0;
  uVar6 = *(undefined8 *)(this + 0x40);
  uVar5 = *(undefined8 *)(this + 0x38);
  uVar8 = *(undefined8 *)(this + 0x30);
  uVar7 = *(undefined8 *)(this + 0x28);
  uVar10 = *(undefined8 *)(this + 0x50);
  uVar9 = *(undefined8 *)(this + 0x48);
  *(undefined4 *)(puVar4 + 9) = uVar3;
  puVar4[10] = uVar1;
  puVar4[0xb] = uVar2;
  *puVar4 = &PTR_traverse_00fed5f8;
  puVar4[1] = param_1;
  puVar4[2] = (ulong)param_2;
  puVar4[8] = uVar10;
  puVar4[7] = uVar9;
  puVar4[4] = uVar8;
  puVar4[3] = uVar7;
  puVar4[6] = uVar6;
  puVar4[5] = uVar5;
  return;
}


