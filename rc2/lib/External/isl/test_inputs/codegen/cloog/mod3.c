for (int c0 = max(0, 32 * h0 - 1991); c0 <= min(999, 32 * h0 + 31); c0 += 1)
  if ((32 * h0 - c0 + 32) % 64 >= 1)
    for (int c1 = 0; c1 <= 999; c1 += 1)
      S1(c0, c1);
