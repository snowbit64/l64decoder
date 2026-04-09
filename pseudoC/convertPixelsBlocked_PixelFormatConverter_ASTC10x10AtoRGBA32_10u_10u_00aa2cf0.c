// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertPixelsBlocked<PixelFormatConverter::ASTC10x10AtoRGBA32,10u,10u>
// Entry Point: 00aa2cf0
// Size: 428 bytes
// Signature: void __cdecl convertPixelsBlocked<PixelFormatConverter::ASTC10x10AtoRGBA32,10u,10u>(void * param_1, uint param_2, void * param_3, uint param_4, uint param_5, uint param_6)


/* void PixelFormatConverter::convertPixelsBlocked<PixelFormatConverter::ASTC10x10AtoRGBA32, 10u,
   10u>(void const*, unsigned int, void*, unsigned int, unsigned int, unsigned int) */

void PixelFormatConverter::convertPixelsBlocked<PixelFormatConverter::ASTC10x10AtoRGBA32,10u,10u>
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
  uchar *local_228;
  void *local_218;
  uint local_208;
  uchar auStack_200 [400];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (param_6 != 0) {
    local_208 = 0;
    uVar6 = param_6;
    local_228 = (uchar *)param_1;
    local_218 = param_3;
    do {
      uVar3 = uVar6 - 10;
      if (9 < uVar6) {
        uVar6 = 10;
      }
      if (param_5 != 0) {
        iVar8 = 0;
        uVar7 = 0;
        puVar10 = local_228;
        uVar5 = param_5;
        do {
          uVar2 = param_5 + iVar8 * -10;
          uVar1 = uVar5;
          if (9 < uVar5) {
            uVar1 = 10;
          }
          if (9 < uVar2) {
            uVar2 = 10;
          }
          ASTCUtil::decodeASTCBlock(puVar10,10,10,auStack_200);
          if (local_208 != param_6) {
            __src = auStack_200;
            __dest = (void *)((long)local_218 + (ulong)uVar7 * 4);
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
          uVar7 = uVar7 + 10;
          iVar8 = iVar8 + 1;
          uVar5 = uVar5 - 10;
        } while (uVar7 < param_5);
      }
      local_228 = local_228 + param_2;
      local_208 = local_208 + 10;
      local_218 = (void *)((long)local_218 +
                          (ulong)(((param_4 >> 2) + (param_4 & 0xfffffffc)) * 2) * 4);
      uVar6 = uVar3;
    } while (local_208 < param_6);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


