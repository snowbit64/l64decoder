// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fixDegenerateEndpoints
// Entry Point: 00a870b4
// Size: 280 bytes
// Signature: undefined __cdecl fixDegenerateEndpoints(uint param_1, color_quad_u8 * param_2, color_quad_u8 * param_3, vec4F * param_4, vec4F * param_5, uint param_6)


/* BC7EncodeUtil::BC7Enc16::fixDegenerateEndpoints(unsigned int,
   BC7EncodeUtil::BC7Enc16::color_quad_u8*, BC7EncodeUtil::BC7Enc16::color_quad_u8*,
   BC7EncodeUtil::BC7Enc16::vec4F const*, BC7EncodeUtil::BC7Enc16::vec4F const*, unsigned int) */

void BC7EncodeUtil::BC7Enc16::fixDegenerateEndpoints
               (uint param_1,color_quad_u8 *param_2,color_quad_u8 *param_3,vec4F *param_4,
               vec4F *param_5,uint param_6)

{
  color_quad_u8 cVar1;
  uint uVar2;
  char cVar3;
  color_quad_u8 *pcVar4;
  
  if (param_1 != 1) {
    return;
  }
  cVar1 = *param_2;
  uVar2 = param_6 >> 1;
  if (((uint)(byte)cVar1 == (uint)(byte)*param_3) && (*(float *)param_4 - *(float *)param_5 != 0.0))
  {
    if (uVar2 < (byte)cVar1) {
LAB_00a87108:
      cVar3 = -1;
      pcVar4 = param_2;
    }
    else {
      if (param_6 <= (byte)cVar1) {
        if ((byte)cVar1 == 0) goto LAB_00a87118;
        goto LAB_00a87108;
      }
      cVar3 = '\x01';
      pcVar4 = param_3;
    }
    *pcVar4 = (color_quad_u8)((char)cVar1 + cVar3);
  }
LAB_00a87118:
  pcVar4 = param_2 + 1;
  cVar1 = *pcVar4;
  if (((uint)(byte)cVar1 == (uint)(byte)param_3[1]) &&
     (*(float *)(param_4 + 4) - *(float *)(param_5 + 4) != 0.0)) {
    if (uVar2 < (byte)cVar1) {
LAB_00a87168:
      cVar3 = -1;
    }
    else {
      if (param_6 <= (byte)cVar1) {
        if ((byte)cVar1 == 0) goto LAB_00a87174;
        goto LAB_00a87168;
      }
      cVar3 = '\x01';
      pcVar4 = param_3 + 1;
    }
    *pcVar4 = (color_quad_u8)((char)cVar1 + cVar3);
  }
LAB_00a87174:
  pcVar4 = param_2 + 2;
  cVar1 = *pcVar4;
  if ((uint)(byte)cVar1 != (uint)(byte)param_3[2]) {
    return;
  }
  if (*(float *)(param_4 + 8) - *(float *)(param_5 + 8) == 0.0) {
    return;
  }
  if ((byte)cVar1 <= uVar2) {
    if ((byte)cVar1 < param_6) {
      cVar3 = '\x01';
      pcVar4 = param_3 + 2;
      goto LAB_00a871c0;
    }
    if ((byte)cVar1 == 0) {
      return;
    }
  }
  cVar3 = -1;
LAB_00a871c0:
  *pcVar4 = (color_quad_u8)((char)cVar1 + cVar3);
  return;
}


