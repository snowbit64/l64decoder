// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseBinaryOp
// Entry Point: 00ef4b38
// Size: 324 bytes
// Signature: undefined __cdecl parseBinaryOp(Lexeme * param_1)


/* Luau::Parser::parseBinaryOp(Luau::Lexeme const&) */

undefined8 Luau::Parser::parseBinaryOp(Lexeme *param_1)

{
  switch(*(undefined4 *)param_1) {
  case 0x25:
    return 0x100000004;
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3d:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
    goto switchD_00ef4b64_caseD_2b;
  case 0x2a:
    return 0x100000002;
  case 0x2b:
    return 0x100000000;
  case 0x2d:
    return 0x100000001;
  case 0x2f:
    return 0x100000003;
  case 0x3c:
    return 0x100000009;
  case 0x3e:
    return 0x10000000b;
  case 0x5e:
    return 0x100000005;
  default:
    switch(*(undefined4 *)param_1) {
    case 0x101:
      return 0x100000008;
    case 0x102:
      return 0x10000000a;
    case 0x103:
      return 0x10000000c;
    case 0x104:
      return 0x100000007;
    case 0x105:
      return 0x100000006;
    case 0x11f:
      return 0x10000000d;
    case 0x12d:
      return 0x10000000e;
    }
switchD_00ef4b64_caseD_2b:
    return 0;
  }
}


