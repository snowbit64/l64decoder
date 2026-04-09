// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dumpInstruction
// Entry Point: 00efc744
// Size: 2008 bytes
// Signature: undefined __thiscall dumpInstruction(BytecodeBuilder * this, uint * param_1, basic_string * param_2, int param_3)


/* Luau::BytecodeBuilder::dumpInstruction(unsigned int const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int) const */

void __thiscall
Luau::BytecodeBuilder::dumpInstruction
          (BytecodeBuilder *this,uint *param_1,basic_string *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  uVar6 = (ulong)(uint)param_3;
  puVar3 = param_1 + 1;
  uVar2 = *param_1;
  uVar1 = (int)uVar2 >> 0x10;
  switch(uVar2 & 0xff) {
  case 1:
    formatAppend(param_2,"BREAK\n");
    return;
  case 2:
    pcVar4 = "LOADNIL R%d\n";
    goto LAB_00efc89c;
  case 3:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    if (uVar2 >> 0x18 != 0) {
      uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
      pcVar4 = "LOADB R%d %d +%d\n";
      break;
    }
    uVar6 = (ulong)(uVar2 >> 0x10);
    pcVar4 = "LOADB R%d %d\n";
    goto LAB_00efcd64;
  case 4:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)uVar1;
    pcVar4 = "LOADN R%d %d\n";
    goto LAB_00efcd64;
  case 5:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)uVar1;
    pcVar4 = "LOADK R%d K%d\n";
    goto LAB_00efcd64;
  case 6:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x10 & 0xff);
    pcVar4 = "MOVE R%d R%d\n";
    goto LAB_00efcd64;
  case 7:
    uVar6 = (ulong)*puVar3;
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "GETGLOBAL R%d K%d\n";
    goto LAB_00efcd64;
  case 8:
    uVar6 = (ulong)*puVar3;
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "SETGLOBAL R%d K%d\n";
    goto LAB_00efcd64;
  case 9:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x10 & 0xff);
    pcVar4 = "GETUPVAL R%d %d\n";
    goto LAB_00efcd64;
  case 10:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x10 & 0xff);
    pcVar4 = "SETUPVAL R%d %d\n";
    goto LAB_00efcd64;
  case 0xb:
    pcVar4 = "CLOSEUPVALS R%d\n";
LAB_00efc89c:
    formatAppend(param_2,pcVar4,(ulong)(uVar2 >> 8 & 0xff));
    return;
  case 0xc:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)uVar1;
    pcVar4 = "GETIMPORT R%d %d\n";
    goto LAB_00efcd64;
  case 0xd:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "GETTABLE R%d R%d R%d\n";
    break;
  case 0xe:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "SETTABLE R%d R%d R%d\n";
    break;
  case 0xf:
    uVar6 = (ulong)*puVar3;
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    pcVar4 = "GETTABLEKS R%d R%d K%d\n";
    break;
  case 0x10:
    uVar6 = (ulong)*puVar3;
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    pcVar4 = "SETTABLEKS R%d R%d K%d\n";
    break;
  case 0x11:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)((uVar2 >> 0x18) + 1);
    pcVar4 = "GETTABLEN R%d R%d %d\n";
    break;
  case 0x12:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)((uVar2 >> 0x18) + 1);
    pcVar4 = "SETTABLEN R%d R%d %d\n";
    break;
  case 0x13:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)uVar1;
    pcVar4 = "NEWCLOSURE R%d P%d\n";
    goto LAB_00efcd64;
  case 0x14:
    uVar6 = (ulong)*puVar3;
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    pcVar4 = "NAMECALL R%d R%d K%d\n";
    break;
  case 0x15:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)((uVar2 >> 0x10 & 0xff) - 1);
    uVar6 = (ulong)((uVar2 >> 0x18) - 1);
    pcVar4 = "CALL R%d %d %d\n";
    break;
  case 0x16:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)((uVar2 >> 0x10 & 0xff) - 1);
    pcVar4 = "RETURN R%d %d\n";
    goto LAB_00efcd64;
  case 0x17:
    pcVar4 = "JUMP L%d\n";
    goto LAB_00efcd78;
  case 0x18:
    pcVar4 = "JUMPBACK L%d\n";
    goto LAB_00efcd78;
  case 0x19:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "JUMPIF R%d L%d\n";
    goto LAB_00efce0c;
  case 0x1a:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "JUMPIFNOT R%d L%d\n";
    goto LAB_00efce0c;
  case 0x1b:
    uVar7 = (ulong)*puVar3;
    uVar9 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "JUMPIFEQ R%d R%d L%d\n";
    goto LAB_00efcdb4;
  case 0x1c:
    uVar7 = (ulong)*puVar3;
    uVar9 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "JUMPIFLE R%d R%d L%d\n";
    goto LAB_00efcdb4;
  case 0x1d:
    uVar7 = (ulong)*puVar3;
    uVar9 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "JUMPIFLT R%d R%d L%d\n";
    goto LAB_00efcdb4;
  case 0x1e:
    uVar7 = (ulong)*puVar3;
    uVar9 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "JUMPIFNOTEQ R%d R%d L%d\n";
    goto LAB_00efcdb4;
  case 0x1f:
    uVar7 = (ulong)*puVar3;
    uVar9 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "JUMPIFNOTLE R%d R%d L%d\n";
    goto LAB_00efcdb4;
  case 0x20:
    uVar7 = (ulong)*puVar3;
    uVar9 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "JUMPIFNOTLT R%d R%d L%d\n";
    goto LAB_00efcdb4;
  case 0x21:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "ADD R%d R%d R%d\n";
    break;
  case 0x22:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "SUB R%d R%d R%d\n";
    break;
  case 0x23:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "MUL R%d R%d R%d\n";
    break;
  case 0x24:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "DIV R%d R%d R%d\n";
    break;
  case 0x25:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "MOD R%d R%d R%d\n";
    break;
  case 0x26:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "POW R%d R%d R%d\n";
    break;
  case 0x27:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "ADDK R%d R%d K%d\n";
    break;
  case 0x28:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "SUBK R%d R%d K%d\n";
    break;
  case 0x29:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "MULK R%d R%d K%d\n";
    break;
  case 0x2a:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "DIVK R%d R%d K%d\n";
    break;
  case 0x2b:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "MODK R%d R%d K%d\n";
    break;
  case 0x2c:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "POWK R%d R%d K%d\n";
    break;
  case 0x2d:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "AND R%d R%d R%d\n";
    break;
  case 0x2e:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "OR R%d R%d R%d\n";
    break;
  case 0x2f:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "ANDK R%d R%d K%d\n";
    break;
  case 0x30:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "ORK R%d R%d K%d\n";
    break;
  case 0x31:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar9 = (ulong)(uVar2 >> 0x10 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x18);
    pcVar4 = "CONCAT R%d R%d R%d\n";
    break;
  case 0x32:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x10 & 0xff);
    pcVar4 = "NOT R%d R%d\n";
    goto LAB_00efcd64;
  case 0x33:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x10 & 0xff);
    pcVar4 = "MINUS R%d R%d\n";
    goto LAB_00efcd64;
  case 0x34:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)(uVar2 >> 0x10 & 0xff);
    pcVar4 = "LENGTH R%d R%d\n";
    goto LAB_00efcd64;
  case 0x35:
    uVar6 = (ulong)*puVar3;
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "NEWTABLE R%d %d %d\n";
    uVar1 = 0;
    if ((uVar2 >> 0x10 & 0xff) != 0) {
      uVar1 = 1 << (ulong)((uVar2 >> 0x10 & 0xff) - 1 & 0x1f);
    }
    uVar9 = (ulong)uVar1;
    break;
  case 0x36:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)uVar1;
    pcVar4 = "DUPTABLE R%d %d\n";
    goto LAB_00efcd64;
  case 0x37:
    formatAppend(param_2,"SETLIST R%d R%d %d [%d]\n",(ulong)(uVar2 >> 8 & 0xff),
                 (ulong)(uVar2 >> 0x10 & 0xff),(ulong)((uVar2 >> 0x18) - 1),(ulong)*puVar3);
    return;
  case 0x38:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "FORNPREP R%d L%d\n";
    goto LAB_00efce0c;
  case 0x39:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "FORNLOOP R%d L%d\n";
    goto LAB_00efce0c;
  case 0x3a:
    pcVar4 = " [inext]";
    if (-1 < (int)*puVar3) {
      pcVar4 = "";
    }
    formatAppend(param_2,"FORGLOOP R%d L%d %d%s\n",(ulong)(uVar2 >> 8 & 0xff),uVar6,
                 (ulong)(*puVar3 & 0xff),pcVar4);
    return;
  case 0x3b:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "FORGPREP_INEXT R%d L%d\n";
    goto LAB_00efce0c;
  default:
    return;
  case 0x3d:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "FORGPREP_NEXT R%d L%d\n";
    goto LAB_00efce0c;
  case 0x3f:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)((uVar2 >> 0x10 & 0xff) - 1);
    pcVar4 = "GETVARARGS R%d %d\n";
    goto LAB_00efcd64;
  case 0x40:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    uVar6 = (ulong)uVar1;
    pcVar4 = "DUPCLOSURE R%d K%d\n";
    goto LAB_00efcd64;
  case 0x42:
    uVar6 = (ulong)*puVar3;
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "LOADKX R%d K%d\n";
LAB_00efcd64:
    formatAppend(param_2,pcVar4,uVar7,uVar6);
    return;
  case 0x43:
    pcVar4 = "JUMPX L%d\n";
LAB_00efcd78:
    formatAppend(param_2,pcVar4,uVar6);
    return;
  case 0x44:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "FASTCALL %d L%d\n";
    goto LAB_00efce0c;
  case 0x45:
    formatAppend(param_2,"COVERAGE\n");
    return;
  case 0x46:
    uVar1 = uVar2 >> 8 & 0xff;
    if (uVar1 == 1) {
      uVar5 = 0x52;
      pcVar4 = "REF";
    }
    else if (uVar1 == 2) {
      uVar5 = 0x55;
      pcVar4 = "UPVAL";
    }
    else {
      uVar5 = 0x52;
      pcVar4 = "VAL";
      if ((uVar2 & 0xff00) != 0) {
        pcVar4 = "";
      }
    }
    formatAppend(param_2,"CAPTURE %s %c%d\n",pcVar4,uVar5,(ulong)(uVar2 >> 0x10 & 0xff));
    return;
  case 0x49:
    uVar9 = (ulong)(uVar2 >> 8 & 0xff);
    uVar7 = (ulong)(uVar2 >> 0x10 & 0xff);
    pcVar4 = "FASTCALL1 %d R%d L%d\n";
LAB_00efcdb4:
    formatAppend(param_2,pcVar4,uVar9,uVar7,uVar6);
    return;
  case 0x4a:
    uVar1 = *puVar3;
    pcVar4 = "FASTCALL2 %d R%d R%d L%d\n";
    goto LAB_00efcdf0;
  case 0x4b:
    uVar1 = *puVar3;
    pcVar4 = "FASTCALL2K %d R%d K%d L%d\n";
LAB_00efcdf0:
    formatAppend(param_2,pcVar4,(ulong)(uVar2 >> 8 & 0xff),(ulong)(uVar2 >> 0x10 & 0xff),
                 (ulong)uVar1,uVar6);
    return;
  case 0x4c:
    uVar7 = (ulong)(uVar2 >> 8 & 0xff);
    pcVar4 = "FORGPREP R%d L%d\n";
LAB_00efce0c:
    formatAppend(param_2,pcVar4,uVar7,uVar6);
    return;
  case 0x4d:
    puVar8 = &DAT_0050a39f;
    if ((int)*puVar3 < 0) {
      puVar8 = &UNK_00505679;
    }
    formatAppend(param_2,"JUMPXEQKNIL R%d L%d%s\n",(ulong)(uVar2 >> 8 & 0xff),uVar6,puVar8);
    return;
  case 0x4e:
    uVar9 = (ulong)(uVar2 >> 8 & 0xff);
    uVar7 = (ulong)(*puVar3 & 1);
    puVar8 = &DAT_0050a39f;
    if ((int)*puVar3 < 0) {
      puVar8 = &UNK_00505679;
    }
    pcVar4 = "JUMPXEQKB R%d %d L%d%s\n";
    goto LAB_00efceb0;
  case 0x4f:
    uVar9 = (ulong)(uVar2 >> 8 & 0xff);
    uVar7 = (ulong)(*puVar3 & 0xffffff);
    puVar8 = &DAT_0050a39f;
    if ((int)*puVar3 < 0) {
      puVar8 = &UNK_00505679;
    }
    pcVar4 = "JUMPXEQKN R%d K%d L%d%s\n";
    goto LAB_00efceb0;
  case 0x50:
    uVar9 = (ulong)(uVar2 >> 8 & 0xff);
    uVar7 = (ulong)(*puVar3 & 0xffffff);
    puVar8 = &DAT_0050a39f;
    if ((int)*puVar3 < 0) {
      puVar8 = &UNK_00505679;
    }
    pcVar4 = "JUMPXEQKS R%d K%d L%d%s\n";
LAB_00efceb0:
    formatAppend(param_2,pcVar4,uVar9,uVar7,uVar6,puVar8);
    return;
  }
  formatAppend(param_2,pcVar4,uVar7,uVar9,uVar6);
  return;
}


