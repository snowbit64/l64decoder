// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixelsBlocked<PixelFormatConverter::ASTC6x5AtoRGBA32,6u,5u>
// Entry Point: 00aa2154
// Size: 424 bytes
// Signature: void __cdecl convertPixelsBlocked<PixelFormatConverter::ASTC6x5AtoRGBA32,6u,5u>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixelsBlocked<PixelFormatConverter::ASTC6x5AtoRGBA32, 6u,
   5u>(void const*, unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixelsBlocked<PixelFormatConverter::ASTC6x5AtoRGBA32,6u,5u>
               (void *param_1,uint param_2,void *param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uchar *puVar10;
  void *__dest;
  uchar *__src;
  uchar *local_118;
  void *local_108;
  uint local_f8;
  uchar auStack_f0 [128];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (param_6 != 0) {
    local_f8 = 0;
    uVar6 = param_6;
    local_118 = (uchar *)param_1;
    local_108 = param_3;
    do {
      uVar3 = uVar6 - 5;
      if (4 < uVar6) {
        uVar6 = 5;
      }
      if (param_5 != 0) {
        iVar8 = 0;
        uVar7 = 0;
        puVar10 = local_118;
        uVar5 = param_5;
        do {
          uVar2 = param_5 + iVar8 * -6;
          uVar1 = uVar5;
          if (5 < uVar5) {
            uVar1 = 6;
          }
          if (5 < uVar2) {
            uVar2 = 6;
          }
          ASTCUtil::decodeASTCBlock(puVar10,6,5,auStack_f0);
          if (local_f8 != param_6) {
            __src = auStack_f0;
            __dest = (void *)((long)local_108 + (ulong)uVar7 * 4);
            uVar9 = (ulong)uVar6;
            do {
              if (uVar7 != param_5) {
                memcpy(__dest,__src,(ulong)uVar2 << 2);
              }
              __src = __src + (ulong)uVar1 * 4;
              __dest = (void *)((long)__dest + (ulong)(param_4 & 0xfffffffc));
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar10 = puVar10 + 0x10;
          uVar7 = uVar7 + 6;
          iVar8 = iVar8 + 1;
          uVar5 = uVar5 - 6;
        } while (uVar7 < param_5);
      }
      local_118 = local_118 + param_2;
      local_f8 = local_f8 + 5;
      local_108 = (void *)((long)local_108 + (ulong)((param_4 >> 2) + (param_4 & 0xfffffffc)) * 4);
      uVar6 = uVar3;
    } while (local_f8 < param_6);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


