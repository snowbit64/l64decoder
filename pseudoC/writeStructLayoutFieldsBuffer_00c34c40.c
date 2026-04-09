// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeStructLayoutFieldsBuffer
// Entry Point: 00c34c40
// Size: 772 bytes
// Signature: undefined __cdecl writeStructLayoutFieldsBuffer(ShaderStructLayout * param_1, char * param_2, StringStream * param_3, ShaderLanguage * param_4)


/* IR_HllConvertUtil::writeStructLayoutFieldsBuffer(ShaderStructLayout const&, char const*,
   StringStream&, ShaderLanguage const&) */

void IR_HllConvertUtil::writeStructLayoutFieldsBuffer
               (ShaderStructLayout *param_1,char *param_2,StringStream *param_3,
               ShaderLanguage *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char acStack_170 [256];
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  lVar10 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != lVar10) {
    uVar3 = *param_4;
    uVar9 = 0;
    iVar12 = 1;
    lVar11 = lVar8;
    do {
      pbVar1 = (byte *)(lVar10 + uVar9 * 0x20);
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1c8 = 0;
      local_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1e8 = 0;
      local_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_208 = 0;
      local_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_228 = 0;
      local_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_248 = 0;
      local_250 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_268 = 0;
      local_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      if (pbVar1[0x1e] != 0) {
        if (*(short *)(pbVar1 + 0x1c) == 0) {
          FUN_00c2f578(&local_270,0x100,&DAT_00513212);
        }
        else {
          FUN_00c2f578(&local_270,0x100,&DAT_0050e6f4);
        }
      }
      uStack_288 = 0;
      local_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_2a8 = 0;
      local_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_2c8 = 0;
      local_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2e8 = 0;
      local_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      pcVar6 = "uint";
      if (pbVar1[0x1f] != 1) {
        pcVar6 = "float";
      }
      uStack_308 = 0;
      local_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_328 = 0;
      local_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_348 = 0;
      local_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_368 = 0;
      local_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      pcVar2 = "int";
      if (pbVar1[0x1f] != 0) {
        pcVar2 = pcVar6;
      }
      FUN_00c2f578(&local_370,0x100," // offset %uB",(ulong)*(ushort *)(pbVar1 + 0x18) << 2);
      bVar4 = pbVar1[0x1b];
      if (pbVar1[0x1a] == 0) {
        if (bVar4 < 2) {
          pbVar7 = pbVar1 + 1;
          if ((*pbVar1 & 1) != 0) {
            pbVar7 = *(byte **)(lVar10 + uVar9 * 0x20 + 0x10);
          }
          FUN_00c2f578(acStack_170,0x100,"    %s %s%s%s;%s\n",pcVar2,param_2,pbVar7,&local_270,
                       &local_370);
        }
        else {
          if ((((uVar3 & 0xfffffffe) == 4) && (uVar9 != 0)) &&
             (*(char *)(*(long *)(param_1 + 0x20) + (ulong)((int)uVar9 - 1) * 0x20 + 0x1b) == '\x03'
             )) {
            iVar12 = iVar12 + 1;
            FUN_00c2f578(acStack_170,0x100,"    %s GS_STRUCT_PADDING_MEMBER%u;\n",pcVar2);
            lVar8 = lVar11;
            StringStream::pushString(param_3,acStack_170);
            lVar11 = lVar8;
          }
          bVar4 = pbVar1[0x1b];
          if ((uVar3 == 5) && (bVar4 == 3)) {
            bVar5 = *pbVar1;
            pbVar7 = *(byte **)(lVar10 + uVar9 * 0x20 + 0x10);
            pcVar6 = "    packed_%s%d %s%s%s;%s\n";
          }
          else {
            bVar5 = *pbVar1;
            pbVar7 = *(byte **)(lVar10 + uVar9 * 0x20 + 0x10);
            pcVar6 = "    %s%d %s%s%s;%s\n";
          }
          pbVar1 = pbVar1 + 1;
          if ((bVar5 & 1) != 0) {
            pbVar1 = pbVar7;
          }
          FUN_00c2f578(acStack_170,0x100,pcVar6,pcVar2,bVar4,param_2,pbVar1,&local_270,&local_370);
        }
      }
      else {
        pbVar7 = pbVar1 + 1;
        if ((*pbVar1 & 1) != 0) {
          pbVar7 = *(byte **)(lVar10 + uVar9 * 0x20 + 0x10);
        }
        if (uVar3 == 5) {
          pcVar6 = "    %s%dx%d %s%s%s;%s\n";
        }
        else {
          pcVar6 = "    row_major %s%dx%d %s%s%s;%s\n";
        }
        FUN_00c2f578(acStack_170,0x100,pcVar6,pcVar2,pbVar1[0x1a],bVar4,param_2,pbVar7,&local_270,
                     &local_370,lVar11,iVar12);
      }
      StringStream::pushString(param_3,acStack_170);
      lVar10 = *(long *)(param_1 + 0x20);
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x28) - lVar10 >> 5));
  }
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


