package main

import (
	"fmt"
	"time"
)

func main() {
	p := fmt.Println

	// We'll start by getting the current time.
	now := time.Now()
	p(now)

	// You can build a `time` struct by providing the
	// year, month, day, etc. Times are always associated
	// with a `Location`, i.e. time zone.
	then := time.Date(
		2026, 5, 12, 13, 04, 16, 651387237, time.Local)
	p(then)

	// You can extract the various components of the time
	// value as expected.
	p(then.Year())
	p(then.Month())

	// The Monday-Sunday `Weekday` is also available.
	p(then.Weekday())

}
