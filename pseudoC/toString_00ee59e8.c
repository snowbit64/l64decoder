// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toString
// Entry Point: 00ee59e8
// Size: 1316 bytes
// Signature: undefined toString(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexeme::toString() const */

void Luau::Lexeme::toString(void)

{
  uint *in_x0;
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 *in_x8;
  uint uVar6;
  undefined4 uVar7;
  
  uVar6 = *in_x0;
  uVar3 = (ulong)uVar6;
  switch(uVar3) {
  case 0:
    *(undefined *)in_x8 = 10;
    *(undefined4 *)((long)in_x8 + 1) = 0x666f653c;
    *(undefined2 *)((long)in_x8 + 5) = 0x3e;
    return;
  default:
    if ((int)uVar6 < 0x100) {
      pcVar4 = "\'%c\'";
LAB_00ee5ee8:
      format(pcVar4,uVar3);
      return;
    }
    if (uVar6 - 0x11f < 0x15) {
      puVar5 = (&PTR_DAT_01016840)[uVar6 - 0x11f];
      goto LAB_00ee5e7c;
    }
    pcVar4 = "<unknown>";
    break;
  case 0x101:
    *(undefined *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = 0x273d3d27;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  case 0x102:
    uVar6 = 0x3c27;
    goto LAB_00ee5cc0;
  case 0x103:
    *(undefined *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = 0x273d3e27;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  case 0x104:
    *(undefined *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = 0x273d7e27;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  case 0x105:
    *(undefined *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = 0x272e2e27;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  case 0x106:
    uVar7 = 0x2e2e2e27;
    goto LAB_00ee5cec;
  case 0x107:
    *(undefined *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = 0x273e2d27;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  case 0x108:
    *(undefined *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = 0x273a3a27;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  case 0x109:
    if (*(long *)(in_x0 + 6) != 0) {
      format("`%.*s{",(ulong)in_x0[5]);
      return;
    }
    pcVar4 = "the beginning of an interpolated string";
    break;
  case 0x10a:
    if (*(long *)(in_x0 + 6) != 0) {
      format("}%.*s{",(ulong)in_x0[5]);
      return;
    }
    pcVar4 = "the middle of an interpolated string";
    break;
  case 0x10b:
    if (*(long *)(in_x0 + 6) != 0) {
      format("}%.*s`",(ulong)in_x0[5]);
      return;
    }
    pcVar4 = "the end of an interpolated string";
    break;
  case 0x10c:
    if (*(long *)(in_x0 + 6) != 0) {
      format("`%.*s`",(ulong)in_x0[5]);
      return;
    }
    pcVar4 = "interpolated string";
    break;
  case 0x10d:
    *(undefined *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = 0x273d2b27;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  case 0x10e:
    *(undefined *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = 0x273d2d27;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  case 0x10f:
    *(undefined *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = 0x273d2a27;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  case 0x110:
    *(undefined *)in_x8 = 8;
    *(undefined4 *)((long)in_x8 + 1) = 0x273d2f27;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  case 0x111:
    uVar6 = 0x2527;
    goto LAB_00ee5cc0;
  case 0x112:
    uVar6 = 0x5e27;
LAB_00ee5cc0:
    *(undefined *)in_x8 = 8;
    *(uint *)((long)in_x8 + 1) = uVar6 | 0x273d0000;
    *(undefined *)((long)in_x8 + 5) = 0;
    return;
  case 0x113:
    uVar7 = 0x3d2e2e27;
LAB_00ee5cec:
    *(undefined *)in_x8 = 10;
    *(undefined4 *)((long)in_x8 + 1) = uVar7;
    *(undefined2 *)((long)in_x8 + 5) = 0x27;
    return;
  case 0x114:
  case 0x115:
    if (*(long *)(in_x0 + 6) != 0) {
      format("\"%.*s\"",(ulong)in_x0[5]);
      return;
    }
    *(undefined *)((long)in_x8 + 7) = 0;
    *(undefined *)in_x8 = 0xc;
    *(undefined4 *)((long)in_x8 + 1) = 0x69727473;
    *(undefined2 *)((long)in_x8 + 5) = 0x676e;
    return;
  case 0x116:
    if (*(long *)(in_x0 + 6) != 0) {
      format("\'%.*s\'",(ulong)in_x0[5]);
      return;
    }
    pcVar4 = "number";
    break;
  case 0x117:
    puVar5 = *(undefined **)(in_x0 + 6);
    if (puVar5 != (undefined *)0x0) {
LAB_00ee5e7c:
      format("\'%s\'",puVar5);
      return;
    }
    pcVar4 = "identifier";
    break;
  case 0x118:
    *(undefined *)(in_x8 + 1) = 0;
    *(undefined *)in_x8 = 0xe;
    *(undefined4 *)((long)in_x8 + 1) = 0x6d6d6f63;
    *(undefined4 *)((long)in_x8 + 4) = 0x746e656d;
    return;
  case 0x11a:
    *(undefined *)((long)in_x8 + 0x11) = 0;
    *(undefined *)in_x8 = 0x20;
    *(undefined8 *)((long)in_x8 + 9) = 0x676e697274732064;
    *(undefined8 *)((long)in_x8 + 1) = 0x656d726f666c616d;
    return;
  case 0x11b:
    *(undefined *)((long)in_x8 + 0x13) = 0;
    *(undefined *)in_x8 = 0x24;
    *(undefined2 *)((long)in_x8 + 0x11) = 0x746e;
    *(undefined8 *)((long)in_x8 + 9) = 0x656d6d6f63206465;
    *(undefined8 *)((long)in_x8 + 1) = 0x6873696e69666e75;
    return;
  case 0x11c:
    if (in_x0[6] != 0) {
      lVar1 = findConfusable(in_x0[6]);
      uVar3 = (ulong)in_x0[6];
      if (lVar1 != 0) {
        format("Unicode character U+%x (did you mean \'%s\'?)",uVar3,lVar1);
        return;
      }
      pcVar4 = "Unicode character U+%x";
      goto LAB_00ee5ee8;
    }
    pcVar4 = "invalid UTF-8 sequence";
    break;
  case 0x11d:
    puVar2 = (undefined8 *)operator_new(0x30);
    in_x8[2] = puVar2;
    *(undefined *)((long)puVar2 + 0x2b) = 0;
    in_x8[1] = 0x2b;
    *in_x8 = 0x31;
    puVar2[1] = 0x6920736920686369;
    *puVar2 = 0x6877202c277b7b27;
    puVar2[3] = 0x20756f7920646964;
    puVar2[2] = 0x282064696c61766e;
    *(undefined8 *)((long)puVar2 + 0x23) = 0x293f277b5c27206e;
    *(undefined8 *)((long)puVar2 + 0x1b) = 0x61656d20756f7920;
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)in_x8
             ,pcVar4);
  return;
}


