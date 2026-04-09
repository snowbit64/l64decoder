// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringSpvImageFormat
// Entry Point: 00ae1b70
// Size: 1012 bytes
// Signature: undefined __cdecl ToStringSpvImageFormat(SpvImageFormat_ param_1)


/* ToStringSpvImageFormat(SpvImageFormat_) */

void ToStringSpvImageFormat(SpvImageFormat_ param_1)

{
  undefined *in_x8;
  undefined2 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  switch(param_1) {
  case 0:
    uVar2 = 0x6e6b6e55;
    uVar4 = 0x6e776f6e;
    break;
  case 1:
    uVar2 = 0x61626752;
    uVar4 = 0x66323361;
    break;
  case 2:
    uVar2 = 0x61626752;
    uVar4 = 0x66363161;
    break;
  case 3:
    uVar2 = 0x66323352;
    goto LAB_00ae1f54;
  case 4:
    uVar2 = 0x61626752;
    uVar1 = 0x38;
    goto LAB_00ae1f38;
  case 5:
    uVar1 = 0x6d72;
    in_x8[0xb] = 0;
    *in_x8 = 0x14;
    uVar5._0_1_ = 'R';
    uVar5._1_1_ = 'g';
    uVar5._2_1_ = 'b';
    uVar5._3_1_ = 'a';
    uVar5._4_1_ = '8';
    uVar5._5_1_ = 'S';
    uVar5._6_1_ = 'n';
    uVar5._7_1_ = 'o';
    goto LAB_00ae1eb8;
  case 6:
    uVar2 = 0x32336752;
    goto LAB_00ae1c4c;
  case 7:
    uVar2 = 0x36316752;
LAB_00ae1c4c:
    uVar1 = 0x66;
    goto LAB_00ae1f38;
  case 8:
    in_x8[0xd] = 0;
    *in_x8 = 0x18;
    *(undefined4 *)(in_x8 + 9) = 0x66303142;
    *(undefined8 *)(in_x8 + 1) = 0x6631314766313152;
    return;
  case 9:
    uVar2 = 0x66363152;
    goto LAB_00ae1f54;
  case 10:
    uVar2 = 0x61626752;
    uVar1 = 0x3631;
    goto LAB_00ae1ee4;
  case 0xb:
    uVar2 = 0x31626752;
    uVar4 = 0x32413031;
    break;
  case 0xc:
    uVar2 = 0x36316752;
    goto LAB_00ae1f54;
  case 0xd:
    uVar2 = 0x386752;
    goto LAB_00ae1e24;
  case 0xe:
    uVar2 = 0x363152;
    goto LAB_00ae1e24;
  case 0xf:
    in_x8[3] = 0;
    *in_x8 = 4;
    *(undefined2 *)(in_x8 + 1) = 0x3852;
    return;
  case 0x10:
    in_x8[0xc] = 0;
    *in_x8 = 0x16;
    *(undefined4 *)(in_x8 + 8) = 0x6d726f6e;
    *(undefined8 *)(in_x8 + 1) = 0x6e53363161626752;
    return;
  case 0x11:
    uVar1 = 0x6d;
    pcVar6 = "Rg16Snorm";
    goto LAB_00ae1eb0;
  case 0x12:
    uVar3 = 0x53386752;
    goto LAB_00ae1d60;
  case 0x13:
    uVar3 = 0x53363152;
LAB_00ae1d60:
    uVar3 = uVar3 | 0x6d726f6e00000000;
LAB_00ae1e58:
    *in_x8 = 0x10;
    *(ulong *)(in_x8 + 1) = uVar3;
    in_x8[9] = 0;
    return;
  case 0x14:
    uVar2 = 0x6e533852;
    uVar4 = 0x6d726f6e;
    break;
  case 0x15:
    uVar2 = 0x61626752;
    uVar4 = 0x69323361;
    break;
  case 0x16:
    uVar2 = 0x61626752;
    uVar4 = 0x69363161;
    break;
  case 0x17:
    uVar2 = 0x61626752;
    uVar1 = 0x6938;
    goto LAB_00ae1ee4;
  case 0x18:
    uVar2 = 0x69323352;
    goto LAB_00ae1f54;
  case 0x19:
    uVar2 = 0x32336752;
    goto LAB_00ae1f34;
  case 0x1a:
    uVar2 = 0x36316752;
    goto LAB_00ae1f34;
  case 0x1b:
    uVar2 = 0x69386752;
    goto LAB_00ae1f54;
  case 0x1c:
    uVar2 = 0x69363152;
    goto LAB_00ae1f54;
  case 0x1d:
    uVar2 = 0x693852;
    goto LAB_00ae1e24;
  case 0x1e:
    uVar3 = 0x323361626752;
    goto LAB_00ae1e54;
  case 0x1f:
    uVar3 = 0x363161626752;
LAB_00ae1e54:
    uVar3 = uVar3 | 0x6975000000000000;
    goto LAB_00ae1e58;
  case 0x20:
    uVar2 = 0x61626752;
    uVar4 = 0x69753861;
    break;
  case 0x21:
    uVar2 = 0x75323352;
    goto LAB_00ae1f34;
  case 0x22:
    uVar1 = 0x69;
    pcVar6 = "Rgb10a2ui";
LAB_00ae1eb0:
    uVar5 = *(undefined8 *)pcVar6;
    *in_x8 = 0x12;
LAB_00ae1eb8:
    *(undefined2 *)(in_x8 + 9) = uVar1;
    *(undefined8 *)(in_x8 + 1) = uVar5;
    return;
  case 0x23:
    uVar2 = 0x32336752;
    goto LAB_00ae1ee0;
  case 0x24:
    uVar2 = 0x36316752;
LAB_00ae1ee0:
    uVar1 = 0x6975;
LAB_00ae1ee4:
    *in_x8 = 0xc;
    *(undefined4 *)(in_x8 + 1) = uVar2;
    *(undefined2 *)(in_x8 + 5) = uVar1;
    in_x8[7] = 0;
    return;
  case 0x25:
    uVar2 = 0x75386752;
    goto LAB_00ae1f34;
  case 0x26:
    uVar2 = 0x75363152;
    goto LAB_00ae1f34;
  case 0x27:
    uVar2 = 0x69753852;
    goto LAB_00ae1f54;
  case 0x28:
    uVar2 = 0x75343652;
LAB_00ae1f34:
    uVar1 = 0x69;
LAB_00ae1f38:
    *in_x8 = 10;
    *(undefined4 *)(in_x8 + 1) = uVar2;
    *(undefined2 *)(in_x8 + 5) = uVar1;
    return;
  case 0x29:
    uVar2 = 0x69343652;
LAB_00ae1f54:
    *in_x8 = 8;
    *(undefined4 *)(in_x8 + 1) = uVar2;
    in_x8[5] = 0;
    return;
  default:
    uVar2 = 0x3f3f3f;
LAB_00ae1e24:
    *in_x8 = 6;
    *(undefined4 *)(in_x8 + 1) = uVar2;
    return;
  }
  *in_x8 = 0xe;
  *(undefined4 *)(in_x8 + 1) = uVar2;
  *(undefined4 *)(in_x8 + 4) = uVar4;
  in_x8[8] = 0;
  return;
}


