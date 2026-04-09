// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INTERNAL_trim_to_complete_utf8_characters
// Entry Point: 00d3a2e4
// Size: 188 bytes
// Signature: undefined _INTERNAL_trim_to_complete_utf8_characters(void)


void _INTERNAL_trim_to_complete_utf8_characters(byte *param_1,byte **param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar2 = *param_2;
  if (param_1 < pbVar2) {
    lVar4 = 0;
    do {
      pbVar3 = pbVar2 + -1;
      bVar1 = *pbVar3;
      if ((bVar1 & 0xf8) == 0xf0) {
        if (lVar4 - 3U < 0xfffffffffffffffc) {
          *param_2 = pbVar2 + 3;
          return;
        }
LAB_00d3a34c:
        lVar4 = 0;
      }
      else {
        if ((bVar1 & 0xf0) == 0xe0) {
          if (lVar4 - 2U < 0xfffffffffffffffd) {
            *param_2 = pbVar2 + 2;
            return;
          }
          goto LAB_00d3a34c;
        }
        if ((bVar1 & 0xe0) == 0xc0) {
          if (lVar4 - 1U < 0xfffffffffffffffe) {
            *param_2 = pbVar2 + 1;
            return;
          }
          goto LAB_00d3a34c;
        }
        if (-1 < (char)bVar1) break;
      }
      lVar4 = lVar4 + 1;
      pbVar2 = pbVar3;
      if (pbVar3 <= param_1) {
        *param_2 = param_1;
        return;
      }
    } while( true );
  }
  *param_2 = pbVar2;
  return;
}


