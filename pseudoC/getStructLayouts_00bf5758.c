// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStructLayouts
// Entry Point: 00bf5758
// Size: 336 bytes
// Signature: undefined __thiscall getStructLayouts(CompiledShaderArchive * this, uint param_1, uint * param_2, ShaderStructLayout * * param_3)


/* CompiledShaderArchive::getStructLayouts(unsigned int, unsigned int&, ShaderStructLayout*&) */

void __thiscall
CompiledShaderArchive::getStructLayouts
          (CompiledShaderArchive *this,uint param_1,uint *param_2,ShaderStructLayout **param_3)

{
  byte **ppbVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  uint *puVar11;
  ulong **ppuVar12;
  ulong *puVar13;
  uint uStack_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar11 = (uint *)(*(long *)(this + 0x30) + (ulong)param_1 * 0x28);
  ppuVar12 = (ulong **)(puVar11 + 2);
  puVar13 = *ppuVar12;
  if (puVar13 == (ulong *)0x0) {
    ppbVar1 = (byte **)(*(long *)(this + 0x30) + (ulong)param_1 * 0x28 + 0x10);
    pbVar5 = (byte *)getDecompressedImage(this,(ArchiveDataBlock *)ppbVar1,&uStack_6c);
    if (pbVar5 == (byte *)0x0) goto LAB_00bf57b8;
    pbVar10 = pbVar5 + 1;
    bVar3 = *pbVar5;
    uVar9 = (ulong)bVar3;
    puVar6 = (ulong *)operator_new__(uVar9 << 6 | 8);
    puVar13 = puVar6 + 1;
    *puVar6 = uVar9;
    if (uVar9 != 0) {
      lVar8 = 0;
      do {
                    /* try { // try from 00bf5844 to 00bf5847 has its CatchHandler @ 00bf58a8 */
        ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)((long)puVar6 + lVar8 + 8));
        lVar8 = lVar8 + 0x40;
      } while (uVar9 * 0x40 - lVar8 != 0);
      if (bVar3 != 0) {
        uVar9 = (ulong)(uint)bVar3;
        puVar6 = puVar13;
        do {
          uVar7 = ShaderStructLayout::deserialize((ShaderStructLayout *)puVar6,pbVar10);
          puVar6 = puVar6 + 8;
          pbVar10 = pbVar10 + (uVar7 & 0xffffffff);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    *puVar11 = (uint)bVar3;
    *ppuVar12 = puVar13;
    if (pbVar5 != *ppbVar1) {
      operator_delete__(pbVar5);
      puVar13 = *ppuVar12;
    }
  }
  uVar2 = *puVar11;
  pbVar5 = (byte *)0x1;
  *param_3 = (ShaderStructLayout *)puVar13;
  *param_2 = uVar2;
LAB_00bf57b8:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar5);
}


