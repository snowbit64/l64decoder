// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findSoundTriggers
// Entry Point: 00709258
// Size: 180 bytes
// Signature: undefined __thiscall findSoundTriggers(AnimalAnimationSystemSource * this, uint param_1, vector * param_2)


/* AnimalAnimationSystemSource::findSoundTriggers(unsigned int,
   std::__ndk1::vector<AnimalAnimationSystemSource::Trigger,
   std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger> >&) */

void __thiscall
AnimalAnimationSystemSource::findSoundTriggers
          (AnimalAnimationSystemSource *this,uint param_1,vector *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (*(int *)(this + 0x2918) != 0) {
    uVar3 = 0;
    puVar2 = (undefined8 *)(this + 0x2920);
    do {
      if ((*(uint *)((long)puVar2 + 4) == 0) && (*(uint *)puVar2 == param_1)) {
        puVar1 = *(undefined8 **)(param_2 + 8);
        if (puVar1 == *(undefined8 **)(param_2 + 0x10)) {
          std::__ndk1::
          vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>>
          ::__push_back_slow_path<AnimalAnimationSystemSource::Trigger_const&>
                    ((vector<AnimalAnimationSystemSource::Trigger,std::__ndk1::allocator<AnimalAnimationSystemSource::Trigger>>
                      *)param_2,(Trigger *)puVar2);
        }
        else {
          *puVar1 = *puVar2;
                    /* try { // try from 007092e0 to 007092e3 has its CatchHandler @ 0070930c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)(puVar1 + 1));
          puVar1[4] = puVar2[4];
          *(undefined8 **)(param_2 + 8) = puVar1 + 5;
        }
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 5;
    } while (uVar3 < *(uint *)(this + 0x2918));
  }
  return;
}


