// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00b09a80
// Size: 328 bytes
// Signature: undefined __cdecl load(char * param_1, AudioBufferDesc * param_2, FORMAT param_3)


/* AudioLoaderCustom::load(char const*, AudioBufferDesc&, IAudioBuffer::FORMAT) */

bool AudioLoaderCustom::load(char *param_1,AudioBufferDesc *param_2,FORMAT param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_60;
  int iStack_5c;
  FileReader aFStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FileReader::FileReader(aFStack_48,param_1);
                    /* try { // try from 00b09ab4 to 00b09b0b has its CatchHandler @ 00b09bd0 */
  uVar5 = FileReader::isValid();
  if ((uVar5 & 1) != 0) {
    *(FORMAT *)param_2 = param_3;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    param_2[4] = (AudioBufferDesc)0x0;
    uVar2 = FileReader::getSize();
    *(uint *)(param_2 + 0x48) = uVar2;
    pvVar6 = operator_new__((ulong)uVar2);
    *(void **)(param_2 + 0x40) = pvVar6;
    iVar3 = FileReader::read(aFStack_48,(uint)pvVar6);
    if (iVar3 == *(int *)(param_2 + 0x48)) {
      if (*(int *)param_2 == 7) {
                    /* try { // try from 00b09b28 to 00b09b3b has its CatchHandler @ 00b09bcc */
        uVar7 = stb_vorbis_open_memory(*(undefined8 *)(param_2 + 0x40),iVar3,0,0);
        uVar4 = stb_vorbis_stream_length_in_samples();
        *(undefined4 *)(param_2 + 0x10) = uVar4;
                    /* try { // try from 00b09b40 to 00b09b73 has its CatchHandler @ 00b09bc8 */
        stb_vorbis_get_info(&local_60,uVar7);
        param_2[4] = (AudioBufferDesc)0x0;
        *(undefined4 *)(param_2 + 8) = local_60;
        if ((iStack_5c == 1) || (iStack_5c == 2)) {
          *(int *)(param_2 + 0xc) = iStack_5c;
        }
        stb_vorbis_close(uVar7);
      }
    }
    else {
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        operator_delete__(*(void **)(param_2 + 0x40));
      }
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  lVar8 = *(long *)(param_2 + 0x40);
  FileReader::~FileReader(aFStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar8 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


