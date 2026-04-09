// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRecordingDevice
// Entry Point: 00b0c900
// Size: 136 bytes
// Signature: undefined __thiscall createRecordingDevice(SoftAudioDevice * this, uint param_1, RecordingFormat param_2, uint param_3)


/* SoftAudioDevice::createRecordingDevice(unsigned int, IAudioRecordingDevice::RecordingFormat,
   unsigned int) */

SoftAudioRecordingDevice * __thiscall
SoftAudioDevice::createRecordingDevice
          (SoftAudioDevice *this,uint param_1,RecordingFormat param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  SoftAudioRecordingDevice *this_00;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = SoLoud::Soloud::initRecordingDevice
                    (*(Soloud **)(this + 8),param_1,(uint)(param_2 == 1),param_3,&local_3c);
  if (iVar2 == 0) {
    this_00 = (SoftAudioRecordingDevice *)operator_new(0x18);
                    /* try { // try from 00b0c958 to 00b0c95b has its CatchHandler @ 00b0c988 */
    SoftAudioRecordingDevice::SoftAudioRecordingDevice(this_00,*(Soloud **)(this + 8),local_3c);
  }
  else {
    this_00 = (SoftAudioRecordingDevice *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


