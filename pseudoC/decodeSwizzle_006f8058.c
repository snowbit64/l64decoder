// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeSwizzle
// Entry Point: 006f8058
// Size: 92 bytes
// Signature: undefined __cdecl decodeSwizzle(char param_1)


/* TextureOverlayRenderer::decodeSwizzle(char) */

undefined8 TextureOverlayRenderer::decodeSwizzle(char param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case '1':
    return 5;
  default:
    uVar1 = 4;
switchD_006f8080_caseD_52:
    return uVar1;
  case 'A':
  case 'a':
    return 3;
  case 'B':
  case 'b':
    return 2;
  case 'G':
  case 'g':
    return 1;
  case 'R':
  case 'r':
    goto switchD_006f8080_caseD_52;
  case 'Y':
  case 'y':
    return 6;
  }
}


