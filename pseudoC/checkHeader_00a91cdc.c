// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkHeader
// Entry Point: 00a91cdc
// Size: 112 bytes
// Signature: undefined __cdecl checkHeader(uchar * param_1, uint param_2)


/* HDRUtil::checkHeader(unsigned char const*, unsigned int) */

undefined8 HDRUtil::checkHeader(uchar *param_1,uint param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = strstr((char *)param_1,"#?RADIANCE");
  if ((((pcVar1 == (char *)0x0) ||
       (pcVar1 = strstr((char *)param_1,"#?RGBE"), pcVar1 == (char *)0x0)) &&
      (pcVar1 = strstr((char *)param_1,"-Y "), pcVar1 != (char *)0x0)) &&
     (pcVar1 = strstr(pcVar1,"+X "), pcVar1 != (char *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


