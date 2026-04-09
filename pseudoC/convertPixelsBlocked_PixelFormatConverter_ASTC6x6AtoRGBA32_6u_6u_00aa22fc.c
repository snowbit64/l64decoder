// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixelsBlocked<PixelFormatConverter::ASTC6x6AtoRGBA32,6u,6u>
// Entry Point: 00aa22fc
// Size: 428 bytes
// Signature: void __cdecl convertPixelsBlocked<PixelFormatConverter::ASTC6x6AtoRGBA32,6u,6u>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixelsBlocked<PixelFormatConverter::ASTC6x6AtoRGBA32, 6u,
   6u>(void const*, unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixelsBlocked<PixelFormatConverter::ASTC6x6AtoRGBA32,6u,6u>
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
  uchar *local_128;
  void *local_118;
  uint local_108;
  uchar auStack_100 [144];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (param_6 != 0) {
    local_108 = 0;
    uVar6 = param_6;
    local_128 = (uchar *)param_1;
    local_118 = param_3;
    do {
      uVar3 = uVar6 - 6;
      if (5 < uVar6) {
        uVar6 = 6;
      }
      if (param_5 != 0) {
        iVar8 = 0;
        uVar7 = 0;
        puVar10 = local_128;
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
          ASTCUtil::decodeASTCBlock(puVar10,6,6,auStack_100);
          if (local_108 != param_6) {
            __src = auStack_100;
            __dest = (void *)((long)local_118 + (ulong)uVar7 * 4);
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
      local_128 = local_128 + param_2;
      local_108 = local_108 + 6;
      local_118 = (void *)((long)local_118 + (ulong)((param_4 >> 2) * 6) * 4);
      uVar6 = uVar3;
    } while (local_108 < param_6);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


