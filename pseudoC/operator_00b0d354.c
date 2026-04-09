// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator!=
// Entry Point: 00b0d354
// Size: 140 bytes
// Signature: undefined __thiscall operator!=(FrequencyFilter * this, FrequencyFilter * param_1)


/* SoftAudioDevice::FrequencyFilter::TEMPNAMEPLACEHOLDERVALUE(SoftAudioDevice::FrequencyFilter
   const&) const */

bool __thiscall
SoftAudioDevice::FrequencyFilter::operator!=(FrequencyFilter *this,FrequencyFilter *param_1)

{
  if (*(float *)this != *(float *)param_1) {
    return true;
  }
  if (*(float *)(this + 4) != *(float *)(param_1 + 4)) {
    return true;
  }
  if (*(float *)(this + 8) != *(float *)(param_1 + 8)) {
    return true;
  }
  if (*(float *)(this + 0xc) != *(float *)(param_1 + 0xc)) {
    return true;
  }
  if (*(float *)(this + 0x10) != *(float *)(param_1 + 0x10)) {
    return true;
  }
  return *(float *)(this + 0x14) != *(float *)(param_1 + 0x14);
}


