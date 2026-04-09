// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToStringSpvExecutionModel
// Entry Point: 00ae09e8
// Size: 588 bytes
// Signature: undefined __cdecl ToStringSpvExecutionModel(SpvExecutionModel_ param_1)


/* ToStringSpvExecutionModel(SpvExecutionModel_) */

void ToStringSpvExecutionModel(SpvExecutionModel_ param_1)

{
  undefined *in_x8;
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  switch(param_1) {
  case 0x1493:
    uVar2 = 0x6b736154;
    break;
  case 0x1494:
    uVar2 = 0x6873654d;
    break;
  case 0x1495:
  case 0x1496:
  case 0x1497:
  case 0x1498:
  case 0x1499:
  case 0x149a:
  case 0x149b:
  case 0x149c:
  case 0x149d:
  case 0x149e:
  case 0x149f:
  case 0x14a0:
  case 0x14a1:
  case 0x14a2:
  case 0x14a3:
  case 0x14a4:
  case 0x14a5:
  case 0x14a6:
  case 0x14a7:
  case 0x14a8:
  case 0x14a9:
  case 0x14aa:
  case 0x14ab:
  case 0x14ac:
  case 0x14ad:
  case 0x14ae:
  case 0x14af:
  case 0x14b0:
  case 0x14b1:
  case 0x14b2:
  case 0x14b3:
  case 0x14b4:
  case 0x14b5:
  case 0x14b6:
  case 0x14b7:
  case 0x14b8:
  case 0x14b9:
  case 0x14ba:
  case 0x14bb:
  case 0x14bc:
  case 0x14bd:
  case 0x14be:
  case 0x14bf:
  case 0x14c0:
switchD_00ae0a0c_caseD_1495:
    *in_x8 = 6;
    *(undefined4 *)(in_x8 + 1) = 0x3f3f3f;
    return;
  case 0x14c1:
    in_x8[0x11] = 0;
    *in_x8 = 0x20;
    *(undefined8 *)(in_x8 + 9) = 0x52484b6e6f697461;
    *(undefined8 *)(in_x8 + 1) = 0x72656e6547796152;
    return;
  case 0x14c2:
    in_x8[0x10] = 0;
    *in_x8 = 0x1e;
    *(undefined8 *)(in_x8 + 1) = 0x6365737265746e49;
    *(undefined8 *)(in_x8 + 8) = 0x52484b6e6f697463;
    return;
  case 0x14c3:
    uVar1 = 0x52;
    pcVar4 = "AnyHitKHR";
LAB_00ae0bfc:
    uVar3 = *(undefined8 *)pcVar4;
    *in_x8 = 0x12;
    *(undefined2 *)(in_x8 + 9) = uVar1;
    *(undefined8 *)(in_x8 + 1) = uVar3;
    return;
  case 0x14c4:
    in_x8[0xe] = 0;
    *in_x8 = 0x1a;
    *(undefined8 *)(in_x8 + 1) = 0x48747365736f6c43;
    *(undefined8 *)(in_x8 + 6) = 0x52484b7469487473;
    return;
  case 0x14c5:
    in_x8[8] = 0;
    *in_x8 = 0xe;
    *(undefined4 *)(in_x8 + 1) = 0x7373694d;
    *(undefined4 *)(in_x8 + 4) = 0x52484b73;
    return;
  case 0x14c6:
    in_x8[0xc] = 0;
    *in_x8 = 0x16;
    *(undefined4 *)(in_x8 + 8) = 0x52484b65;
    *(undefined8 *)(in_x8 + 1) = 0x656c62616c6c6143;
    return;
  default:
    switch(param_1) {
    case 0:
      uVar2 = 0x74726556;
      uVar1 = 0x7865;
      break;
    case 1:
      in_x8[0x14] = 0;
      *in_x8 = 0x26;
      *(undefined4 *)(in_x8 + 0x10) = 0x6c6f7274;
      *(undefined8 *)(in_x8 + 9) = 0x746e6f436e6f6974;
      *(undefined8 *)(in_x8 + 1) = 0x616c6c6573736554;
      return;
    case 2:
      in_x8[0x17] = 0;
      *in_x8 = 0x2c;
      *(undefined8 *)(in_x8 + 9) = 0x6c6176456e6f6974;
      *(undefined8 *)(in_x8 + 1) = 0x616c6c6573736554;
      *(undefined8 *)(in_x8 + 0xf) = 0x6e6f697461756c61;
      return;
    case 3:
      uVar3 = 0x797274656d6f6547;
      goto LAB_00ae0bdc;
    case 4:
      uVar3 = 0x746e656d67617246;
LAB_00ae0bdc:
      *in_x8 = 0x10;
      *(undefined8 *)(in_x8 + 1) = uVar3;
      in_x8[9] = 0;
      return;
    case 5:
      uVar1 = 0x65;
      pcVar4 = "GLCompute";
      goto LAB_00ae0bfc;
    case 6:
      uVar2 = 0x6e72654b;
      uVar1 = 0x6c65;
      break;
    default:
      goto switchD_00ae0a0c_caseD_1495;
    }
    goto LAB_00ae0c20;
  }
  uVar1 = 0x564e;
LAB_00ae0c20:
  *in_x8 = 0xc;
  *(undefined4 *)(in_x8 + 1) = uVar2;
  *(undefined2 *)(in_x8 + 5) = uVar1;
  in_x8[7] = 0;
  return;
}


