// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringGenerator
// Entry Point: 00ae06ac
// Size: 544 bytes
// Signature: undefined __cdecl ToStringGenerator(SpvReflectGenerator param_1)


/* ToStringGenerator(SpvReflectGenerator) */

void ToStringGenerator(SpvReflectGenerator param_1)

{
  undefined8 *puVar1;
  undefined8 *in_x8;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  switch(param_1) {
  case 6:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "Khronos LLVM/SPIR-V Translator";
    goto LAB_00ae070c;
  case 7:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "Khronos SPIR-V Tools Assembler";
LAB_00ae070c:
    uVar4 = *(undefined8 *)((long)pcVar2 + 8);
    uVar3 = *(undefined8 *)pcVar2;
    in_x8[2] = puVar1;
    uVar6 = *(undefined8 *)((long)pcVar2 + 0x16);
    uVar5 = *(undefined8 *)((long)pcVar2 + 0xe);
    *(undefined *)((long)puVar1 + 0x1e) = 0;
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    *(undefined8 *)((long)puVar1 + 0x16) = uVar6;
    *(undefined8 *)((long)puVar1 + 0xe) = uVar5;
    in_x8[1] = 0x1e;
    *in_x8 = 0x21;
    break;
  case 8:
    puVar1 = (undefined8 *)operator_new(0x30);
    in_x8[2] = puVar1;
    uVar7 = 0x23;
    *(undefined *)((long)puVar1 + 0x23) = 0;
    uVar4._0_1_ = 'G';
    uVar4._1_1_ = 'l';
    uVar4._2_1_ = 's';
    uVar4._3_1_ = 'l';
    uVar4._4_1_ = 'a';
    uVar4._5_1_ = 'n';
    uVar4._6_1_ = 'g';
    uVar4._7_1_ = ' ';
    uVar3._0_1_ = 'K';
    uVar3._1_1_ = 'h';
    uVar3._2_1_ = 'r';
    uVar3._3_1_ = 'o';
    uVar3._4_1_ = 'n';
    uVar3._5_1_ = 'o';
    uVar3._6_1_ = 's';
    uVar3._7_1_ = ' ';
    uVar6._0_1_ = 'e';
    uVar6._1_1_ = ' ';
    uVar6._2_1_ = 'F';
    uVar6._3_1_ = 'r';
    uVar6._4_1_ = 'o';
    uVar6._5_1_ = 'n';
    uVar6._6_1_ = 't';
    uVar6._7_1_ = ' ';
    uVar5._0_1_ = 'R';
    uVar5._1_1_ = 'e';
    uVar5._2_1_ = 'f';
    uVar5._3_1_ = 'e';
    uVar5._4_1_ = 'r';
    uVar5._5_1_ = 'e';
    uVar5._6_1_ = 'n';
    uVar5._7_1_ = 'c';
    *(undefined4 *)((long)puVar1 + 0x1f) = 0x646e4520;
    goto LAB_00ae0810;
  default:
    *(undefined *)in_x8 = 6;
    *(undefined4 *)((long)in_x8 + 1) = 0x3f3f3f;
    break;
  case 0xd:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "Google Shaderc over Glslang";
    goto LAB_00ae0830;
  case 0xe:
    *(undefined *)((long)in_x8 + 0xf) = 0;
    *(undefined *)in_x8 = 0x1c;
    *(undefined8 *)((long)in_x8 + 1) = 0x7320656c676f6f47;
    *(undefined8 *)((long)in_x8 + 7) = 0x6767657269707320;
    break;
  case 0xf:
    *(undefined *)((long)in_x8 + 0xe) = 0;
    *(undefined *)in_x8 = 0x1a;
    *(undefined8 *)((long)in_x8 + 1) = 0x7220656c676f6f47;
    *(undefined8 *)((long)in_x8 + 6) = 0x7672697073722065;
    break;
  case 0x10:
    puVar1 = (undefined8 *)operator_new(0x30);
    in_x8[2] = puVar1;
    uVar7 = 0x22;
    *(undefined *)((long)puVar1 + 0x22) = 0;
    uVar4._0_1_ = ' ';
    uVar4._1_1_ = 'M';
    uVar4._2_1_ = 'e';
    uVar4._3_1_ = 's';
    uVar4._4_1_ = 'a';
    uVar4._5_1_ = '-';
    uVar4._6_1_ = 'I';
    uVar4._7_1_ = 'R';
    uVar3._0_1_ = 'X';
    uVar3._1_1_ = '-';
    uVar3._2_1_ = 'L';
    uVar3._3_1_ = 'E';
    uVar3._4_1_ = 'G';
    uVar3._5_1_ = 'E';
    uVar3._6_1_ = 'N';
    uVar3._7_1_ = 'D';
    uVar6._0_1_ = 'T';
    uVar6._1_1_ = 'r';
    uVar6._2_1_ = 'a';
    uVar6._3_1_ = 'n';
    uVar6._4_1_ = 's';
    uVar6._5_1_ = 'l';
    uVar6._6_1_ = 'a';
    uVar6._7_1_ = 't';
    uVar5._0_1_ = '/';
    uVar5._1_1_ = 'S';
    uVar5._2_1_ = 'P';
    uVar5._3_1_ = 'I';
    uVar5._4_1_ = 'R';
    uVar5._5_1_ = '-';
    uVar5._6_1_ = 'V';
    uVar5._7_1_ = ' ';
    *(undefined2 *)(puVar1 + 4) = 0x726f;
LAB_00ae0810:
    in_x8[1] = uVar7;
    *in_x8 = 0x31;
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    break;
  case 0x11:
    puVar1 = (undefined8 *)operator_new(0x20);
    pcVar2 = "Khronos SPIR-V Tools Linker";
LAB_00ae0830:
    uVar4 = *(undefined8 *)((long)pcVar2 + 8);
    uVar3 = *(undefined8 *)pcVar2;
    in_x8[2] = puVar1;
    uVar6 = *(undefined8 *)((long)pcVar2 + 0x13);
    uVar5 = *(undefined8 *)((long)pcVar2 + 0xb);
    *(undefined *)((long)puVar1 + 0x1b) = 0;
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    *(undefined8 *)((long)puVar1 + 0x13) = uVar6;
    *(undefined8 *)((long)puVar1 + 0xb) = uVar5;
    in_x8[1] = 0x1b;
    *in_x8 = 0x21;
    break;
  case 0x12:
    puVar1 = (undefined8 *)operator_new(0x20);
    in_x8[2] = puVar1;
    *(undefined *)((long)puVar1 + 0x1a) = 0;
    in_x8[1] = 0x1a;
    *in_x8 = 0x21;
    puVar1[1] = 0x6564616853204433;
    *puVar1 = 0x444b5620656e6957;
    *(undefined8 *)((long)puVar1 + 0x12) = 0x72656c69706d6f43;
    *(undefined8 *)((long)puVar1 + 10) = 0x2072656461685320;
    break;
  case 0x13:
    puVar1 = (undefined8 *)operator_new(0x20);
    in_x8[2] = puVar1;
    *(undefined *)((long)puVar1 + 0x19) = 0;
    in_x8[1] = 0x19;
    *in_x8 = 0x21;
    puVar1[1] = 0x7265646168532079;
    *puVar1 = 0x616c432079616c43;
    *(undefined8 *)((long)puVar1 + 0x11) = 0x72656c69706d6f43;
    *(undefined8 *)((long)puVar1 + 9) = 0x2072656461685320;
  }
  return;
}


