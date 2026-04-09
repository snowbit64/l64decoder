// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StaticSoundRuntimeSettings
// Entry Point: 008afc70
// Size: 160 bytes
// Signature: undefined __thiscall StaticSoundRuntimeSettings(StaticSoundRuntimeSettings * this, StaticSoundRuntimeSettings * param_1)


/* StaticSoundRuntimeSettings::StaticSoundRuntimeSettings(StaticSoundRuntimeSettings const&) */

void __thiscall
StaticSoundRuntimeSettings::StaticSoundRuntimeSettings
          (StaticSoundRuntimeSettings *this,StaticSoundRuntimeSettings *param_1)

{
  uint uVar1;
  void *pvVar2;
  
  *(undefined2 *)this = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(void **)(this + 0x18) = (void *)0x0;
                    /* try { // try from 008afc9c to 008afcc3 has its CatchHandler @ 008afd10 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this,
            (basic_string *)param_1);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(uint *)(param_1 + 0x2c);
    pvVar2 = operator_new__((ulong)uVar1);
    *(void **)(this + 0x18) = pvVar2;
    memcpy(pvVar2,*(void **)(param_1 + 0x18),(ulong)uVar1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = *(uint *)(param_1 + 0x2c);
                    /* try { // try from 008afce4 to 008afce7 has its CatchHandler @ 008afd10 */
    pvVar2 = operator_new__((ulong)uVar1 << 1);
    *(void **)(this + 0x20) = pvVar2;
    memcpy(pvVar2,*(void **)(param_1 + 0x20),(ulong)uVar1);
  }
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


