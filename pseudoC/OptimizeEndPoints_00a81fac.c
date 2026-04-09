// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: OptimizeEndPoints
// Entry Point: 00a81fac
// Size: 296 bytes
// Signature: undefined __thiscall OptimizeEndPoints(D3DX_BC7 * this, EncodeParams * param_1, ulong param_2, ulong param_3, float * param_4, LDREndPntPair * param_5, LDREndPntPair * param_6)


/* BC6BC7Util::D3DX_BC7::OptimizeEndPoints(BC6BC7Util::D3DX_BC7::EncodeParams const*, unsigned long,
   unsigned long, float const*, BC6BC7Util::LDREndPntPair const*, BC6BC7Util::LDREndPntPair*) const
    */

void __thiscall
BC6BC7Util::D3DX_BC7::OptimizeEndPoints
          (D3DX_BC7 *this,EncodeParams *param_1,ulong param_2,ulong param_3,float *param_4,
          LDREndPntPair *param_5,LDREndPntPair *param_6)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_a8 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar1 = (&ms_aInfo)[(ulong)(byte)*param_1 * 0xf];
  uVar7 = 0;
  do {
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      if (uVar7 == (byte)s_aPartitionTable[lVar6 + (param_2 + (ulong)bVar1 * 0x40) * 0x10]) {
        uVar4 = uVar5 + 1;
        local_a8[uVar5] = *(undefined4 *)(param_1 + lVar6 * 4 + 0x601);
      }
      lVar6 = lVar6 + 1;
      uVar5 = uVar4;
    } while (lVar6 != 0x10);
    OptimizeOne(this,param_1,(LDRColorA *)local_a8,uVar4,param_3,param_4[uVar7],param_5 + uVar7 * 8,
                param_6 + uVar7 * 8);
    bVar3 = uVar7 != bVar1;
    uVar7 = uVar7 + 1;
  } while (bVar3);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


