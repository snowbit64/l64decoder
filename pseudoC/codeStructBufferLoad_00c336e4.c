// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: codeStructBufferLoad
// Entry Point: 00c336e4
// Size: 560 bytes
// Signature: undefined __cdecl codeStructBufferLoad(ConversionContext * param_1, char * param_2, char * param_3, Field * param_4, uint param_5)


/* IR_HllConvertUtil::codeStructBufferLoad(IR_HllConvertUtil::ConversionContext&, char const*, char
   const*, ShaderStructLayout::Field&, unsigned int) */

void IR_HllConvertUtil::codeStructBufferLoad
               (ConversionContext *param_1,char *param_2,char *param_3,Field *param_4,uint param_5)

{
  Field FVar1;
  long lVar2;
  void *pvVar3;
  char *in_x5;
  uint uVar4;
  undefined8 *in_x8;
  byte local_188 [16];
  void *local_178;
  undefined4 local_170;
  undefined local_16c;
  undefined auStack_168 [256];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FVar1 = param_4[0x1a];
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (FVar1 == (Field)0x0) {
    if ((byte)param_4[0x1b] < 4) {
      uVar4 = (uint)(byte)param_4[0x1b];
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      local_16c = 0;
      local_170 = 0x777a7978;
      *(undefined *)((long)&local_170 + (ulong)param_5 + (ulong)uVar4) = 0;
                    /* try { // try from 00c33848 to 00c33863 has its CatchHandler @ 00c33920 */
      codeStructBufferFetch
                ((IR_HllConvertUtil *)param_1,(ConversionContext *)param_2,param_3,(char *)0x0,
                 (uint)((long)&local_170 + (ulong)param_5),in_x5);
      pvVar3 = (void *)((ulong)local_188 | 1);
      if ((local_188[0] & 1) != 0) {
        pvVar3 = local_178;
      }
                    /* try { // try from 00c33880 to 00c33887 has its CatchHandler @ 00c3391c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8,(ulong)pvVar3);
    }
    else {
                    /* try { // try from 00c3388c to 00c338ab has its CatchHandler @ 00c33918 */
      codeStructBufferFetch
                ((IR_HllConvertUtil *)param_1,(ConversionContext *)param_2,param_3,(char *)0x0,0,
                 in_x5);
      pvVar3 = (void *)((ulong)local_188 | 1);
      if ((local_188[0] & 1) != 0) {
        pvVar3 = local_178;
      }
                    /* try { // try from 00c338c8 to 00c338cf has its CatchHandler @ 00c33914 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)in_x8,(ulong)pvVar3);
    }
    if ((local_188[0] & 1) != 0) {
      operator_delete(local_178);
    }
  }
  else {
                    /* try { // try from 00c33738 to 00c33757 has its CatchHandler @ 00c33928 */
    FUN_00c2f578(auStack_168,0x100,"float%ux%u(",FVar1,param_4[0x1b]);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    FVar1 = param_4[0x1a];
    local_16c = 0;
    local_170 = 0x777a7978;
    *(undefined *)((long)&local_170 + (ulong)(byte)param_4[0x1b]) = 0;
    if (FVar1 != (Field)0x0) {
      uVar4 = 0;
      do {
        if (uVar4 != 0) {
                    /* try { // try from 00c337a8 to 00c337b3 has its CatchHandler @ 00c3392c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)in_x8);
        }
                    /* try { // try from 00c337b4 to 00c337cf has its CatchHandler @ 00c33960 */
        codeStructBufferFetch
                  ((IR_HllConvertUtil *)param_1,(ConversionContext *)param_2,param_3,
                   (char *)(ulong)uVar4,(uint)&local_170,in_x5);
        pvVar3 = (void *)((ulong)local_188 | 1);
        if ((local_188[0] & 1) != 0) {
          pvVar3 = local_178;
        }
                    /* try { // try from 00c337e8 to 00c337ef has its CatchHandler @ 00c33930 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)in_x8,(ulong)pvVar3);
        if ((local_188[0] & 1) != 0) {
          operator_delete(local_178);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (byte)param_4[0x1a]);
    }
                    /* try { // try from 00c33804 to 00c33813 has its CatchHandler @ 00c33924 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


