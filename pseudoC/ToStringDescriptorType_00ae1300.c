// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringDescriptorType
// Entry Point: 00ae1300
// Size: 616 bytes
// Signature: undefined __cdecl ToStringDescriptorType(SpvReflectDescriptorType param_1)


/* ToStringDescriptorType(SpvReflectDescriptorType) */

void ToStringDescriptorType(SpvReflectDescriptorType param_1)

{
  undefined8 *puVar1;
  undefined8 *in_x8;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  switch(param_1) {
  case 0:
    puVar1 = (undefined8 *)operator_new(0x20);
    in_x8[2] = puVar1;
    puVar2 = (undefined8 *)((long)puVar1 + 0x1a);
    in_x8[1] = 0x1a;
    *in_x8 = 0x21;
    puVar1[1] = 0x59545f524f545049;
    *puVar1 = 0x52435345445f4b56;
    *(undefined8 *)((long)puVar1 + 0x12) = 0x52454c504d41535f;
    *(undefined8 *)((long)puVar1 + 10) = 0x455059545f524f54;
    goto LAB_00ae1530;
  case 1:
    puVar1 = (undefined8 *)operator_new(0x30);
    pcVar3 = "VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER";
    break;
  case 2:
    puVar1 = (undefined8 *)operator_new(0x30);
    pcVar3 = "VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE";
    goto LAB_00ae13f8;
  case 3:
    puVar1 = (undefined8 *)operator_new(0x30);
    pcVar3 = "VK_DESCRIPTOR_TYPE_STORAGE_IMAGE";
LAB_00ae13f8:
    uVar6 = *(undefined8 *)((long)pcVar3 + 8);
    uVar5 = *(undefined8 *)pcVar3;
    uVar8 = *(undefined8 *)((long)pcVar3 + 0x18);
    uVar7 = *(undefined8 *)((long)pcVar3 + 0x10);
    in_x8[2] = puVar1;
    uVar4 = 0x20;
    puVar2 = puVar1 + 4;
LAB_00ae1528:
    in_x8[1] = uVar4;
    *in_x8 = 0x31;
    puVar1[1] = uVar6;
    *puVar1 = uVar5;
    puVar1[3] = uVar8;
    puVar1[2] = uVar7;
    goto LAB_00ae1530;
  case 4:
    puVar1 = (undefined8 *)operator_new(0x30);
    pcVar3 = "VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER";
    goto LAB_00ae1438;
  case 5:
    puVar1 = (undefined8 *)operator_new(0x30);
    pcVar3 = "VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER";
LAB_00ae1438:
    uVar5 = *(undefined8 *)((long)pcVar3 + 8);
    uVar4 = *(undefined8 *)pcVar3;
    uVar7 = *(undefined8 *)((long)pcVar3 + 0x18);
    uVar6 = *(undefined8 *)((long)pcVar3 + 0x10);
    in_x8[2] = puVar1;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    uVar4 = *(undefined8 *)((long)pcVar3 + 0x1f);
    puVar2 = (undefined8 *)((long)puVar1 + 0x27);
    in_x8[1] = 0x27;
    *in_x8 = 0x31;
    *(undefined8 *)((long)puVar1 + 0x1f) = uVar4;
    goto LAB_00ae1530;
  case 6:
    puVar1 = (undefined8 *)operator_new(0x30);
    pcVar3 = "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER";
    goto LAB_00ae1490;
  case 7:
    puVar1 = (undefined8 *)operator_new(0x30);
    pcVar3 = "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER";
LAB_00ae1490:
    uVar6 = *(undefined8 *)((long)pcVar3 + 8);
    uVar5 = *(undefined8 *)pcVar3;
    uVar8 = *(undefined8 *)((long)pcVar3 + 0x18);
    uVar7 = *(undefined8 *)((long)pcVar3 + 0x10);
    in_x8[2] = puVar1;
    *(undefined *)(puVar1 + 4) = 0x52;
    uVar4 = 0x21;
    puVar2 = (undefined8 *)((long)puVar1 + 0x21);
    goto LAB_00ae1528;
  case 8:
    puVar1 = (undefined8 *)operator_new(0x30);
    pcVar3 = "VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC";
    break;
  case 9:
    puVar1 = (undefined8 *)operator_new(0x30);
    pcVar3 = "VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC";
    break;
  case 10:
    puVar1 = (undefined8 *)operator_new(0x30);
    in_x8[2] = puVar1;
    uVar4 = 0x23;
    puVar2 = (undefined8 *)((long)puVar1 + 0x23);
    uVar6._0_1_ = 'I';
    uVar6._1_1_ = 'P';
    uVar6._2_1_ = 'T';
    uVar6._3_1_ = 'O';
    uVar6._4_1_ = 'R';
    uVar6._5_1_ = '_';
    uVar6._6_1_ = 'T';
    uVar6._7_1_ = 'Y';
    uVar5._0_1_ = 'V';
    uVar5._1_1_ = 'K';
    uVar5._2_1_ = '_';
    uVar5._3_1_ = 'D';
    uVar5._4_1_ = 'E';
    uVar5._5_1_ = 'S';
    uVar5._6_1_ = 'C';
    uVar5._7_1_ = 'R';
    uVar8._0_1_ = '_';
    uVar8._1_1_ = 'A';
    uVar8._2_1_ = 'T';
    uVar8._3_1_ = 'T';
    uVar8._4_1_ = 'A';
    uVar8._5_1_ = 'C';
    uVar8._6_1_ = 'H';
    uVar8._7_1_ = 'M';
    uVar7._0_1_ = 'P';
    uVar7._1_1_ = 'E';
    uVar7._2_1_ = '_';
    uVar7._3_1_ = 'I';
    uVar7._4_1_ = 'N';
    uVar7._5_1_ = 'P';
    uVar7._6_1_ = 'U';
    uVar7._7_1_ = 'T';
    *(undefined4 *)((long)puVar1 + 0x1f) = 0x544e454d;
    goto LAB_00ae1528;
  default:
    if (param_1 == 0x3b9d13f0) {
      puVar1 = (undefined8 *)operator_new(0x30);
      in_x8[2] = puVar1;
      puVar2 = (undefined8 *)((long)puVar1 + 0x2d);
      in_x8[1] = 0x2d;
      *in_x8 = 0x31;
      puVar1[1] = 0x59545f524f545049;
      *puVar1 = 0x52435345445f4b56;
      puVar1[3] = 0x5f4e4f4954415245;
      puVar1[2] = 0x4c454343415f4550;
      *(undefined8 *)((long)puVar1 + 0x25) = 0x52484b5f45525554;
      *(undefined8 *)((long)puVar1 + 0x1d) = 0x43555254535f4e4f;
    }
    else {
      *(undefined *)in_x8 = 0x2c;
      puVar2 = (undefined8 *)((long)in_x8 + 0x17);
      *(undefined8 *)((long)in_x8 + 9) = 0x59545f524f545049;
      *(undefined8 *)((long)in_x8 + 1) = 0x52435345445f4b56;
      *(undefined8 *)((long)in_x8 + 0xf) = 0x3f3f3f5f45505954;
    }
    goto LAB_00ae1530;
  }
  uVar5 = *(undefined8 *)((long)pcVar3 + 8);
  uVar4 = *(undefined8 *)pcVar3;
  uVar7 = *(undefined8 *)((long)pcVar3 + 0x18);
  uVar6 = *(undefined8 *)((long)pcVar3 + 0x10);
  in_x8[2] = puVar1;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  uVar5 = *(undefined8 *)((long)pcVar3 + 0x21);
  uVar4 = *(undefined8 *)((long)pcVar3 + 0x19);
  puVar2 = (undefined8 *)((long)puVar1 + 0x29);
  in_x8[1] = 0x29;
  *in_x8 = 0x31;
  *(undefined8 *)((long)puVar1 + 0x21) = uVar5;
  *(undefined8 *)((long)puVar1 + 0x19) = uVar4;
LAB_00ae1530:
  *(undefined *)puVar2 = 0;
  return;
}


