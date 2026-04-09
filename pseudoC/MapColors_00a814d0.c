// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MapColors
// Entry Point: 00a814d0
// Size: 248 bytes
// Signature: undefined __thiscall MapColors(D3DX_BC7 * this, EncodeParams * param_1, LDRColorA * param_2, ulong param_3, ulong param_4, LDREndPntPair * param_5, float param_6)


/* BC6BC7Util::D3DX_BC7::MapColors(BC6BC7Util::D3DX_BC7::EncodeParams const*, BC6BC7Util::LDRColorA
   const*, unsigned long, unsigned long, BC6BC7Util::LDREndPntPair const&, float) const */

float __thiscall
BC6BC7Util::D3DX_BC7::MapColors
          (D3DX_BC7 *this,EncodeParams *param_1,LDRColorA *param_2,ulong param_3,ulong param_4,
          LDREndPntPair *param_5,float param_6)

{
  uchar *puVar1;
  uchar uVar2;
  uchar uVar3;
  long lVar4;
  uchar *puVar5;
  float fVar6;
  float fVar7;
  LDRColorA aLStack_98 [64];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar1 = &DAT_0051f9a6 + (ulong)(byte)*param_1 * 0xf;
  puVar5 = &DAT_0051f9a5 + (ulong)(byte)*param_1 * 0xf;
  if (param_4 != 0) {
    puVar1 = &DAT_0051f9a5 + (ulong)(byte)*param_1 * 0xf;
    puVar5 = &DAT_0051f9a6 + (ulong)(byte)*param_1 * 0xf;
  }
  uVar2 = *puVar5;
  uVar3 = *puVar1;
  GeneratePaletteQuantized(this,param_1,param_4,param_5,aLStack_98);
  fVar7 = 0.0;
  if (param_3 != 0) {
    do {
      fVar6 = (float)ComputeError(param_2,aLStack_98,uVar2,uVar3,(ulong *)0x0,(ulong *)0x0);
      fVar7 = fVar7 + fVar6;
      if (param_6 < fVar7) {
        fVar7 = 3.402823e+38;
        break;
      }
      param_3 = param_3 - 1;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return fVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


