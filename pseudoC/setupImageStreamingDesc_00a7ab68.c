// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupImageStreamingDesc
// Entry Point: 00a7ab68
// Size: 172 bytes
// Signature: undefined __cdecl setupImageStreamingDesc(DDSHeader * param_1, DDSHeaderDX10 * param_2, uint param_3, bool param_4, uint param_5, uint param_6, uint param_7, ImageDesc * param_8, ImageStreamingDesc * param_9)


/* DDSUtil::setupImageStreamingDesc(DDSUtil::DDSHeader const&, DDSUtil::DDSHeaderDX10 const&,
   unsigned int, bool, unsigned int, unsigned int, unsigned int, ImageDesc const&,
   ImageStreamingDesc&) */

void DDSUtil::setupImageStreamingDesc
               (DDSHeader *param_1,DDSHeaderDX10 *param_2,uint param_3,bool param_4,uint param_5,
               uint param_6,uint param_7,ImageDesc *param_8,ImageStreamingDesc *param_9)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_9[0x70] = (ImageStreamingDesc)param_4;
  *(uint *)param_9 = param_3;
  *(uint *)(param_9 + 4) = param_6;
  *(uint *)(param_9 + 8) = param_7;
  *(uint *)(param_9 + 0xc) = param_5;
  if (param_5 != 0) {
    puVar3 = (undefined8 *)operator_new__(0x90);
    *(undefined8 **)(param_9 + 0x10) = puVar3;
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    puVar3[9] = *(undefined8 *)(param_1 + 0x48);
    puVar3[8] = uVar4;
    puVar3[0xb] = uVar6;
    puVar3[10] = uVar5;
    uVar11 = *(undefined8 *)(param_1 + 0x74);
    uVar10 = *(undefined8 *)(param_1 + 0x6c);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)param_1;
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    puVar3[0xd] = uVar9;
    puVar3[0xc] = uVar8;
    *(undefined8 *)((long)puVar3 + 0x74) = uVar11;
    *(undefined8 *)((long)puVar3 + 0x6c) = uVar10;
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    puVar3[1] = uVar5;
    *puVar3 = uVar4;
    puVar3[3] = uVar7;
    puVar3[2] = uVar6;
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    puVar3[7] = uVar11;
    puVar3[6] = uVar10;
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)param_2;
    *(undefined4 *)((long)puVar3 + 0x8c) = uVar1;
    *(undefined8 *)((long)puVar3 + 0x84) = uVar5;
    *(undefined8 *)((long)puVar3 + 0x7c) = uVar4;
  }
  uVar6 = *(undefined8 *)param_8;
  uVar5 = *(undefined8 *)(param_8 + 0x18);
  uVar4 = *(undefined8 *)(param_8 + 0x10);
  *(undefined8 *)(param_9 + 0x20) = *(undefined8 *)(param_8 + 8);
  *(undefined8 *)(param_9 + 0x18) = uVar6;
  *(undefined8 *)(param_9 + 0x30) = uVar5;
  *(undefined8 *)(param_9 + 0x28) = uVar4;
  uVar6 = *(undefined8 *)(param_8 + 0x38);
  uVar5 = *(undefined8 *)(param_8 + 0x30);
  uVar4 = *(undefined8 *)(param_8 + 0x40);
  uVar2 = *(undefined2 *)(param_8 + 0x50);
  uVar8 = *(undefined8 *)(param_8 + 0x28);
  uVar7 = *(undefined8 *)(param_8 + 0x20);
  *(undefined8 *)(param_9 + 0x60) = *(undefined8 *)(param_8 + 0x48);
  *(undefined8 *)(param_9 + 0x58) = uVar4;
  *(undefined8 *)(param_9 + 0x50) = uVar6;
  *(undefined8 *)(param_9 + 0x48) = uVar5;
  *(undefined2 *)(param_9 + 0x68) = uVar2;
  *(undefined8 *)(param_9 + 0x40) = uVar8;
  *(undefined8 *)(param_9 + 0x38) = uVar7;
  return;
}


