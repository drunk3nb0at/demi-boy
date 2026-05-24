package main

import (
	"fmt"
	"time"
)

func main() {
	p := fmt.Println

	now := time.Now()
	p(now)

	then := time.Date(
		2026, 5, 12, 13, 04, 16, 651387237, time.Local)
	p(then)

	p(then.Month())
	p(then.Weekday())

}
